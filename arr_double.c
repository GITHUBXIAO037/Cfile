#include <stdio.h>
void arr_d(int arr[],int n){
	int cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			if (arr[i] == arr[j])
			{
				cnt++;

				if (cnt == 1)
				{
					printf("%d\n", arr[i]);
					break;
				}
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	int a[10] = {1,2,3,4,5,6,3,8,9,10};

	arr_d(a,10);
	return 0;
}