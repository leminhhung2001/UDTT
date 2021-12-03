
#include <stdio.h>
int R[1000 + 1];
int n, lmax, j, k, end = 1;
int main()
{
	scanf("%d", &n);
	int a[n + 1], L[n + 1], ans[n + 1];
	int i;
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	L[1] = 1;
	for (j = 2; j <= n; j++)
	{
		lmax = 0;
		for (k = 1; k < j; k++)
		{
			if (a[k] < a[j])
				if (lmax < L[k])
				{
					lmax = L[k];
					R[j] = k;
				}
		}
		L[j] = lmax + 1;
	}

	// Tìm vị trí cuối cùng phần tử  lớn nhất của mảng L
	int t = L[1];
	for (i = 1; i <= n; i++)
	{
		if (t < L[i])
		{
			t = L[i];
			end = i;
		}
	}

		ans[1] = a[end];
	int cnt = 1;

	while (R[end])
	{
		cnt++;
		ans[cnt] = a[R[end]];
		end = R[end];
	}

	for (i = cnt; i >= 1; i--)
		printf("%d ", ans[i]);

	printf("\n");
}
