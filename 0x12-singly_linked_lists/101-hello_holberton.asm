global main

extern printf


SECTION .data
fd           db  "Hello, Holberton",10

SECTION .text

main:
    lea     rdi, [fd]
    xor     rax, rax
    call    printf
    sub     rax, 17
