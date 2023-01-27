section .data
    message db 'Hello, World!',0

section .text
    global main

main:
    ; setup the stack and base pointer
    push rbp
    mov rbp, rsp

    ; setup the arguments for printf
    lea rdi, [rel message]    ; load address of message into rdi
    xor rax, rax              ; clear rax
    call printf              ; call printf

    ; cleanup and exit
    xor rdi, rdi              ; clear rdi
    call exit                ; call exit

    ; printf and exit are part of the C library, so we must include it
    extern printf
    extern exit
