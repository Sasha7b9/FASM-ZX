
define z80 z80

element z80.reg
element z80.r8  : z80.reg + 1
element z80.r16 : z80.reg + 2

element a? : x86.r8 + 0
element b? : x86.r8 + 1
element c? : x86.r8 + 2
element d? : x86.r8 + 3
element e? : x86.r8 + 4
element f? : x86.r8 + 5
element h? : x86.r8 + 6
element l? : x86.r8 + 7

element af? : x86.r16 + 0
element bc? : x86.r16 + 1
element de? : x86.r16 + 2
element hl? : x86.r16 + 3
