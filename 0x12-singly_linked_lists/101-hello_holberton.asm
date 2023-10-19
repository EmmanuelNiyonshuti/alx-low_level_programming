section .data
    hello db "Hello, Holberton", 0

section .text
    global printf
    extern printf

    global _start
    section .text
_start:
    push hello
    call printf
    add esp, 4

    ; Exit the program
    mov eax, 1          ; syscall: exit
    xor ebx, ebx        ; status: 0
    int 0x80             ; call kernel

