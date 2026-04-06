// // 1.Reverse a string using stack
// #include <stdio.h>
// #include <string.h>

// #define MAX 100

// char stack[MAX];
// int top = -1;

// // Push operation
// void push(char ch) {
//     if(top == MAX - 1) {
//         printf("Stack Overflow\n");
//     } else {
//         stack[++top] = ch;
//     }
// }

// // Pop operation
// char pop() {
//     if(top == -1) {
//         return '\0';
//     } else {
//         return stack[top--];
//     }
// }

// int main() {
//     char str[MAX], reversed[MAX];
//     int i = 0;

//     printf("Enter a string: ");
//     scanf("%s", str);

//     // Push all characters into stack
//     for(i = 0; i < strlen(str); i++) {
//         push(str[i]);
//     }

//     // Pop characters to reverse string
//     for(i = 0; i < strlen(str); i++) {
//         reversed[i] = pop();
//     }

//     reversed[i] = '\0';

//     printf("Reversed string: %s", reversed);

//     return 0;
// }