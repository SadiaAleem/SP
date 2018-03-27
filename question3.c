#include<stdio.h>
#include<stdlib.h>
#include<setjmp.h>

static jmp_buf envbuf;
int counter;

void firstSetJump();
void haveFun();


int main()
{
	counter = setjmp(envbuf);

	if (counter==0)
	{
		firstSetJump();
	}
	else
	{
		haveFun();
	}

	return 0;
}

void firstSetJump()
{
	printf("value of counter: %d\n", counter);
	counter = counter + 1;
	longjmp(envbuf, 1);

}

void haveFun()
{
	printf("value of counter: %d\n", counter);
	counter = counter + 1;
	longjmp(envbuf, 1);
}

