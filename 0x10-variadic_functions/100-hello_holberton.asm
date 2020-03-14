section .data
    f db 'Hello, Holberton', 0ah

section .text
global main

main:
    mov rax, 1
    mov rdi, 1
    mov rsi, f
    mov rdx, 17
    syscall
    mov rax, 60
    mov rdi, 0
    syscall
