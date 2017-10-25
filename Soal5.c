#include <stdio.h>
#include <pthread.h>

int main (int argc, int *argc[])
{
            pthread_t t[argc];
            while (--argc)
			{
				pthread_create (&t[argc], NULL, &jumlah_count, NULL);
                pthread_join(t[argc], NULL);
            }
            

}
void *jumlah_count(void *fren)
	{
        char temanku[20]=(void *)fren;
        FILE* filein;
        filein= fopen("/home/ditopradipta/Desktop/Novel.txt",r);
	}


