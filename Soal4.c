#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>
#include <unistd.h>


void* factorial (void* faktorial)
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

