Largest,smallest and sorted.


#include <stdio.h>
int main()
{
    int i, j, temp, k;
    scanf("%d", &k);
    int a[10] = {101, 44, 34, 8, 10, 23, 1, 10, 9, 7};
    for(i = 0; i < 10; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(a[j] > a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("The %dth largest element is: %d\n", k, a[k - 1]);
    printf("The %dth smallest element is: %d\n", k, a[10 - k]);
    printf("Printing sorted element list...\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}