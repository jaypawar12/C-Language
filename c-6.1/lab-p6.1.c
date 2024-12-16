// #include <stdio.h>

// int main() {
    
//     int n=1;
    
//     do{
        
//         printf("%d\n", n);
        
//         n++;
//     }while(n<=10);
    
//     return 0;
// }


// ---------------------------------------


// #include <stdio.h>

// int main() {
    
    
//     for (int n=10; n >= 1; n--){
//         printf("%d\n", n);
//     }
    
//     return 0;
// }

// ----------------------------------------


// #include <stdio.h>

// int main() {
    
//     int n;
    
//     printf("Enter any number: ");
//     scanf("%d", &n);
    
//     int num = 2;
    
//     do{
//         if (num <= n) { 
//             printf("%d\n", num); 
//             }
//         num += 2;
        
//     }while(num <= n);
    
//     return 0;
// }


// ----------------------------------------------


// #include <stdio.h>

// int main() {
//     int N;

//     printf("Enter any number: ");
//     scanf("%d", &N);

//     if (N <= 0) {
//         printf("Please enter a positive integer.\n");
//         return 0;
//     }

//     int a = 0, b = 1, next;

//     for (int i = 1; i <= N; i++) {
//         if (i == 1) {
//             printf("%d\n", a); 
//         } else if (i == 2) {
//             printf("%d\n", b); 
//         } else {
//             next = a + b; 
//             printf("%d\n", next); 
//             a = b;
//             b = next; 
//         }
//     }

//     return 0;
// }
