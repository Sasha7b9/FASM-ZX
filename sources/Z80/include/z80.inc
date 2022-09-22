define z80 z80

element z80.reg
element z80.r8  : z80.reg + 1
element z80.r16 : z80.reg + 2

element a? : z80.r8 + 0
element b? : z80.r8 + 1
element c? : z80.r8 + 2

define @dest @dest
define @src @src

iterate context, @dest, @src

    namespace context
    
        iterate name, size
        end iterate

        calminstruction z80.parse_operand#context operand
            
            compute size, 0
            compute displacement_size, 0
            
            transform operand
            
            match [address], operand
            jyes   memory_operand
            
          immediate_operand:
            compute type, 'imm'
            compute imm, +operand
            
          memory_operand:
            compute type, 'mem'
             
        end calminstruction
    
    end namespace

end iterate

calminstruction ld? dest*, src*

    call z80.parse_operand@dest, dest
;    call z80.parse_operand@src, src
    
;    local size
    
;    check @dest.size = 0 & @src.size = 0
    
end calminstruction