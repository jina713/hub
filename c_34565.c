#include <stdio.h>
int main(void)
{ 
    printf("%s\n", "각 과목의 점수와 합계, 평균을 출력한다.");
    printf("kor %d, mat %d, eng %d\n", 55,65,90);
    printf(" sum %d\n", 55+65+90);
    printf(" avg %d\n", (55+65+90)/3);
    return 0;
}