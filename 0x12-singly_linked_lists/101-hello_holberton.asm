section .data
    format db 'Hello, Holberton', 10, 0
    fmt db "%s", 0

section .text
    extern printf

global main
main:
    sub rsp, 8
    mov edi, format
    mov esi, 0
    mov eax, 0
    call printf
    add rsp, 8
    xor eax, eax
    ret
