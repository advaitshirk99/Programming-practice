;Factorial of 5 = (120)D = (78)H, RESULT IN R0
        AREA RESET, DATA, READONLY
    EXPORT __Vectors

__Vectors
        DCD 0X10001000          ;stack pointer value when stack is empty
        DCD Reset_Handler       ;reset vector

        ALIGN

            AREA mycode, CODE, READONLY
            ENTRY
            EXPORT Reset_Handler

Reset_Handler
            ldr     r0,=05      ;Loading 5 in r0 register
            bl      Factorial        
stop        b       stop

factorial
            push    {r4,lr}     ;r4 and link register (lr) pushed to the top of the stack
            mov     r4,r0       ;copying r0 to r4
            cmp     r0,#0       ;comparing r0 with 0
            bne     not_zero    ;branch to not_zero if not equal
            mov     r0,#1       ;store 1 in r0
            b       last        ;branch to last

not_zero
            sub     r0,r0,#1    ;r0 = r0 -1
            bl      factorial   ;recursively call factorial
            mov     r1,r4
            mul     r0,r0,r1    ;r0 = r0 * r1

last        
            pop     {r4,lr}     ;pops out r4 and link register 
            bx      lr          ;return

