#include <stdio.h>

void find_max_min(int n, int num[], int *p, int *q)
{
    *p = num[0];
    *q = num[0];
    int i;
    for (i = 0; i <= n; i++)
    {
        if (num[i] > *p)
            *p = num[i];
        if (num[i] < *q)
            *q = num[i];
    }
}
int main()
{
    int arr[] = {13, 25, 67, 4, 96, 45, 35};
    int n = 7;
    int maxx, minn;
    find_max_min(n, arr, &maxx, &minn);
    printf("%d %d", maxx, minn);
    return 0;
}