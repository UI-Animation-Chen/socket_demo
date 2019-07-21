#include <stdio.h>

int main(int argc, char *argv[], char *env[]) {
	printf("env: %s\n", env[1]);
	return 0;
}
