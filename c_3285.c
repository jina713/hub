#include <stdio.h>
int main(void)
{
        printf("%s%8s\n", "sub", "score");
        printf("-------------\n");
        printf("%s%8d\n", "kor", 50);
        printf("%s%8d\n", "mat", 65);
        printf("%s%8d\n", "eng", 90);
        printf("-------------\n"); 
        printf("%s%8d\n", "sum", 50+65+90);
        printf("%s%8d\n", "avg", (50+65+90/3);
        return 0;
}