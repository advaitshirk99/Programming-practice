;GCD of two numbers

        AREA RESET, DATA, READONLY
        EXPORT __Vectors

__Vectors
        DCD     0x10001000      ;Value of stack pointer when stack is empty
        DCD     Reset_Handler   ;reset vector

        ALIGN

        AREA mycode, CODE, READONLY
        EXPORT Reset_Handler

Reset_Handler
        ldr     r0,=NUM1        ;load the address of num1 in code memory
        ldr     r1,=NUM2        ;load the address of num2 in code memory
        ldr     r0,[NUM1]       ;R0 = 5
        ldr     r1,[NUM2]       ;R1 = 10

up      cmp     r0,r1           ;compare r0 with r1 (check for equality)     
        beq     qt              ;jump to qt, if equal
        subhi   r0,r1           ;subtraction only executed if C=1 and Z=0 condition is satisfied. r0 = r0-r1  
        sublo   r1,r0           ;subtraction only executed if C=0 and Z=0 condition is satisfied. r1 = r1-r0 
        b       up              ;jump to up

qt      ldr     r2,=GCD         ;loads the address of GCD to store the result in data memory in r2
        str     r0,[r2]         ;stores the result in r0

stop    b       stop            ;infinite stop loop

NUM1    DCD     5
NUM2    DCD     10

        AREA DATAWRITE, DATA, READWRITE
GCD     DCD     0,0,0,0,0       ;initializes gcd to zero
        END