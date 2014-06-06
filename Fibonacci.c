#include <stdio.h>
#include <malloc.h>
void main() 
{
int i/* for loof */, a0=0, a1=1, num;  
  int * ptr = (int * ) malloc(sizeof(int) * num);
    puts("수열의 갯수 (3 이상 써주세요.)");
    printf(": ");
    scanf("%d", & num);
    printf("a0 :");
    printf("%d |", a0);
    printf("a1 :");
    printf("%d |", a1);
    for (i = 2; i < num; i++) {
        ptr[0] = 0;
        ptr[1] = 1;
        ptr[i] = ptr[(i - 2)] + ptr[(i - 1)];
        printf("a%d :", i);
        printf("%d |", ptr[i]);
    }
    printf("\n");
    return;
}

