A?    equ[:111b:]
B?    equ[:000b:]
C?    equ[:001b:]
D?    equ[:010b:]
E?    equ[:011b:]
H?    equ[:100b:]
L?    equ[:101b:]

macro ld? reg_dest?*,reg_src?*
    local dest, src
    dest = 0
    src = 0
    match[:r:], reg_dest
        dest = r shl 3
    else match (=HL?), reg_dest
        dest = 010b shl 3
    else
        err "incorrect argument"
    end match
    match[:r:], reg_src
        src = r
    else match (=HL?), reg_src
        src = 010b
    else
        err "incorrect argument"
    end match
    db 01000000b + dest + src
end macro
