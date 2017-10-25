#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char* argv[]) 

{
	pthread_t thread[argc];
	int p, simpen;

	for (p = 1; p<argc; p++)
	{
		simpen = atoi(argv[p])
		pthread_create(thread[p], NULL, &factorial, (void*)simpen);
	}

	for (p = 1; p<argc; p++) 
	{
		pthread_join(thread[p], NULL);
	}

}


void* factorial(void* faktorial)
{
	int n, i;
	faktorial = 1;
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
		{
			faktorial = faktorial*i;              // faktorial = faktorial*i;
		}
	
	printf("Faktorial dari %d = %d", n, faktorial);
}

