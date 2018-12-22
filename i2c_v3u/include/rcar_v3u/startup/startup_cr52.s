
    IF :DEF: __AARCH32

    area    STARTUP, code, readonly
	
    export  Reset_Handler
    import  UndefinedInstruction_Handler
    import  SupervisorCall_Handler
    import  PrefetchAbort_Handler
    import  DataAbort_Handler
    import  IRQ_Handler
	import	__use_no_semihosting_swi
    import  __mpu_init
    import  __main
    import  __vectors_start
	
    entry

    b   Reset_Handler   ; 0x00
    b   UDF_EXC         ; 0x04
    b   SVC_EXC         ; 0x08
    b   PAB_EXC         ; 0x0c
    b   DAB_EXC         ; 0x10
    nop                 ; 0x14
    b   IRQ_EXC	        ; 0x18
FIQ_EXC                 ; 0x1c
    ; If you want to use fast interrupt, place its service code here.
    ; Maximum code size allowed is 4kB
    b   FIQ_EXC
    
UDF_EXC
    push    {r0-r3,r10-r12,lr}
    bl  UndefinedInstruction_Handler
    pop {r0-r3,r10-r12,lr}
    eret

SVC_EXC
    push    {r0-r3,r10-r12,lr}
    bl  SupervisorCall_Handler
    pop {r0-r3,r10-r12,lr}
    eret

PAB_EXC
    push    {r0-r3,r10-r12,lr}
    bl  PrefetchAbort_Handler
    pop {r0-r3,r10-r12,lr}
    eret

DAB_EXC
    push    {r0-r3,r10-r12,lr}
    bl  DataAbort_Handler
    pop {r0-r3,r10-r12,lr}
    eret

IRQ_EXC
    push    {r0-r3,r10-r12,lr}
    bl  IRQ_Handler
    pop {r0-r3,r10-r12,lr}
    eret

Reset_Handler

    ; Initialize MPU
    bl  __mpu_init

    ; Set the CPACR for access to CP10 and CP11 (the FPU coprocessors)
    ldr r0, = (0xF << 20)
    mcr p15, 0, r0, c1, c0, 2
    ; Set the FPEXC EN bit to enable the FPU
    mov  r3, #0x0
    movt r3, #0x4000
    vmsr FPEXC, r3

    ; Change vector base address
    ldr r0, = __vectors_start
    mcr p15, 4, r0, c12, c0, 0
    mcr p15, 0, r0, c12, c0, 0

    IF :DEF: __USE_DDR
    ; Initialize DDR
    import  __ddr_init
    bl      __ddr_init
    ENDIF

    ; Give the control to the C library
    b   __main

    ENDIF

    end
