#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
 
    int found = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
            found = 1;
        }
    }
 
    if (!found) {
        printf("-1\n");
    }
 
    return 0;
}
 

//  #include <stdio.h>
// int main() 
// {
//     int n;
//     scanf("%d", &n);
//     if (n==1)
//     {
//        printf("-1\n");
//     }
//     else
//     {
//         for (int i=1;i<=n;i=i+1)
//         {
//             if (i%2==0)
//             {
//                 printf("%d\n",i);
//             }
//         } 
//     }
//     return 0;
// }