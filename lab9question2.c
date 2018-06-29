#include<signal.h>
#include<stdlib.h>

int main()
{
	pid_t cpid = fork();
	if(cpid==0)
	{
		for(,,)
		{
			printf("child in infinite loop");
			sleep(1);
		}
	}
	else
	{
		sleep(5);
		kill(cpid, SIGINT);
		printf("child terminated");
		exit(0);

	}
}
