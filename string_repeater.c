#include <stdio.h>


int main(){
    int n;
    char string[100];
    printf("how any times string should print: ");
    if (scanf("%d", &n) == 1) {
        if (n < 0) {
            printf("error negative number\n");
            return 0;
        }
        
        printf("enter string: ");
        scanf("%s", string);
    } else {
        printf("error: not an integer\n");
        return 0;
    }


    for (int i=0; i<n; i++) {
        printf("%s\n", string);
    }

    printf("printed %s %d times\n", string, n);

    return 0;
}