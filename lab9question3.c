#include<signal.h>
void mySignalHandler(int signum)
{
	switch(signum)
	{
		case 1:
			prinf("SIGHUP");
			break;
		case 2:
			printf("SIGINT");
			break;
		case 3:
			printf("SIGQUIT");
			break;
		case 8:
			printf("SIGFPE");
			break;
		case 9:
			printf("SIGKILL");
			break;
		case 20:
			printf("SIGTSTP");
			break;

	}
}

int main()
{
	signal(SIGHUP, mySignalHandler);
	signal(SIGINT, mySignalHandler);
	signal(SIGQUIT, mySignalHandler);
	signal(SIGFPE, mySignalHandler);
	signal(SIGKILL, mySignalHandler);
	signal(SIGTSTP, mySignalHandler);

	while(1)
	{
		printf("infinite loop");
		sleep(1);
	}

	return 0;
}

