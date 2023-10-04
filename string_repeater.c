#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]){
    printf("num of args: %d\n", argc);
    if (argc != 3) {
        printf("not the correct number of arguments!\n");
        return 0;
    }

    printf("string: %s\n", argv[2]);

    char *s = argv[1];
    char *endptr;
    int num;
    num = strtol(s, &endptr, 10);

    if (num < 0) {
        printf("error negative number\n");
        return 0;
    }

    for (int i=0; i<num; i++) {
        printf("%s\n", argv[2]);
    }

    printf("printed %s %d times\n", argv[2], num);

    return 0;
}