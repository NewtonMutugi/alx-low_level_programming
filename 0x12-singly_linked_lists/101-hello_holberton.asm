section .data
    hello db 'Hello, Holberton', 0

section .text
    global _start

_start:
    ; write string to stdout
    mov eax, 4 ; system call number (sys_write)
    mov ebx, 1 ; file descriptor (stdout)
    mov ecx, hello ; pointer to string to write
    mov edx, 13 ; length of string to write
    int 0x80 ; call kernel

    ; write a newline to stdout
    mov eax, 4 ; system call number (sys_write)
    mov ebx, 1 ; file descriptor (stdout)
    mov ecx, newline ; pointer to newline character
    mov edx, 1 ; length of string to write (1 byte)
    int 0x80 ; call kernel

    ; exit with status code 0
    mov eax, 1 ; system call number (sys_exit)
    xor ebx, ebx ; exit status
    int 0x80 ; call kernel

section .rodata
    newline db 10
