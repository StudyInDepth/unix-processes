#include <stdio.h>
int main() {
	printf("pid of subshell: %d \n", getpid());
	printf("pid of parent shell: %d \n", getppid());
	return 0;
}
