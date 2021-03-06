#include <stdio.h>

/* 敘罌
    1類 2�� : 0類 1�� + 0類 2��
    1類 3�� : 0類 1�� + 0類 2�� + 0類 3�� = 1類 2�� + 0類 3��
    => k類 n�� : k類 (n-1)�� + (k-1)類 n��
*/

int main(void)
{
    int T, k, n;

    int arr[15][15] = { 0 };

    for (int i = 0; i < 15; i++)
        arr[0][i] = i;

    for (int i = 1; i < 15; i++)
        for (int j = 1; j < 15; j++)
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1];

    scanf_s("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf_s("%d", &k);
        scanf_s("%d", &n);
        printf("%d\n", arr[k][n]);
    }

    return 0;
}