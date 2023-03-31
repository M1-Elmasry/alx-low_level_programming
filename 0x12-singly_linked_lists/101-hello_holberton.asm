global main
main:
mov rdi, message
mov rsi, 0
mov al, 0

extern printf
call printf

ret
message: 
db "Hello, Holberton", 10, 0
