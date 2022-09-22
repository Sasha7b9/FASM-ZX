define z80 z80

define @dest @dest
define @src @src

iterate context, @dest, @src

    namespace context

        calminstruction z80.parse_operand#context operand
        end calminstruction
    
    end namespace

end iterate

calminstruction ld? dest*, src*

    call z80.parse_operand@dest, dest
    call z80.parse_operand@src, src
    
end calminstruction