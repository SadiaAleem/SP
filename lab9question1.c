#include<signal.h>

int main()
{
	signal(SIGINT, SIG_IGN);
	signal(SIGFPE, SIG_IGN);
	signal(SIGQUIT, SIG_IGN);
	signal(SIGTSTP, SIG_IGN);
	signal(SIGHUP, SIG_IGN);

	return 0;
}
