A? equ[:111b:]
B? equ[:000b:]
C? equ[:001b:]
D? equ[:010b:]
E? equ[:011b:]
H? equ[:100b:]
L? equ[:101b:]

macro ld? reg_dest?*,reg_src?*
    match[:r:], reg_dest
        match[:c:], reg_src
            db 01000000b + r shl 3 + c
        end match
    end match
end macro
