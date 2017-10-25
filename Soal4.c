#include <stdio.h>
int main()
{
	int n, i;
	faktorial = 1;
	printf("Masukan integer: ");
	scanf("%d", &n);

	//  akan error jika user memasukan integer negatif
	if (n < 0)
		printf("Error! faktorial yang dimasukan bernilai negatif "); 

	else
	{
		for (i = 1; i <= n; i++)
		{
			faktorial = faktorial*i;              // faktorial = faktorial*i;
		}
		printf("Faktorial dari %d = %d", n, faktorial);
	}

	return 0;
}