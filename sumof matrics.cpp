#include <stdio.h>

int main()
 {
    int a[2][3], b[2][3], c[2][3], i, j;

    printf("\n enter array A size of 3*3\n");
    for (i = 0; i < 2; i++)
	 {
        for (j = 0; j < 3; j++)
		 {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n enter array B size of 3*3\n");
    for (i = 0; i <2; i++) 
	{
        for (j = 0; j < 3; j++) 
		{
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 3; j++)
		 {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]); // Use '\t' for spacing
        }
        printf("\n");
    }

    return 0;
}

