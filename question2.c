#include<stdio.h>
#include<stdlib.h>

int main()
{
int *p1;
int *p2;
int *p3;
int *p4;

printf("before: 0x%x\n", sbrk(0));

p1=(int *)malloc(4);
printf("sbrk(0) after malloc(4): 0x%x\n", sbrk(0));

p2=(int *)malloc(6);
printf("sbrk(0) after malloc(6): 0x%x\n",sbrk(0));

p3=(int *)malloc(8);
printf("sbrk(0) after malloc(8): 0x%x\n",sbrk(0));

p4=(int *)malloc(10);
printf("sbrk(0) after malloc(10): 0x%x\n",sbrk(0));

printf("0x%x\n", p1);
printf("0x%x\n", p2);
printf("0x%x\n", p3);
printf("0x%x\n", p4);

printf("sbrk(0) after: 0x%x\n",sbrk(0));

return 0;

}
