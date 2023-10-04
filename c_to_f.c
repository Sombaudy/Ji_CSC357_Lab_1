#include <stdio.h>

void printy(float* fah) {
    float n = *fah;

    printf("f: %f\n",n);

    if(n>=100){
        printf("Warning: Heat Wave!\n");
    } else if((n>= 80) & (n<= 99)) {
        printf("Hot\n");
    } else if((n>= 41) & (n<= 79)) {
        printf("Normal\n");
    } else if((n>= 10) & (n<= 40)) {
        printf("Cold\n");
    }
}

int main(){
    float c;
    float f;
    printf("enter celsius: ");
    scanf("%f", &c);

    f = c*1.8 + 32;

    printy(&f);

    return 0;
}