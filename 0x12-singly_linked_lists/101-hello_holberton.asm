section .data
    format db "Hello, Holberton",10,0  ; The format string

section .text
global main
extern printf

main:
    push rbp        ; Preserve the base pointer
    mov rdi, format ; Load the address of the format string
    call printf     ; Call the printf function
    add rsp, 8      ; Adjust the stack (64-bit calling convention)
    pop rbp         ; Restore the base pointer

    ; Exit the program
    mov rax, 60     ; sys_exit system call
    xor rdi, rdi    ; Status: 0
    syscall
