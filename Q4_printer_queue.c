// #include <stdio.h>

// #define MAX 100

// int queue[MAX];
// int front = -1, rear = -1;

// // Enqueue operation
// void enqueue(int doc) {
//     if(rear == MAX - 1) {
//         printf("Queue Overflow\n");
//     } else {
//         if(front == -1)
//             front = 0;
//         queue[++rear] = doc;
//         printf("Document %d added to queue\n", doc);
//     }
// }

// // Dequeue operation
// void dequeue() {
//     if(front == -1 || front > rear) {
//         printf("Queue Underflow\n");
//     } else {
//         printf("Printing document: %d\n", queue[front]);
//         front++;
//     }
// }

// // Display queue
// void display() {
//     int i;
//     if(front == -1 || front > rear) {
//         printf("Queue is empty\n");
//     } else {
//         printf("Pending documents: ");
//         for(i = front; i <= rear; i++) {
//             printf("%d ", queue[i]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int choice, doc;

//     while(1) {
//         printf("\n1. Add Document\n2. Print Document\n3. Display Queue\n4. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch(choice) {
//             case 1:
//                 printf("Enter document number: ");
//                 scanf("%d", &doc);
//                 enqueue(doc);
//                 break;

//             case 2:
//                 dequeue();
//                 break;

//             case 3:
//                 display();
//                 break;

//             case 4:
//                 return 0;

//             default:
//                 printf("Invalid choice\n");
//         }
//     }

//     return 0;
// }