#include <stdio.h>
#include <unistd.h>
int main(int argc, char const *argv[])
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};

	int i = 0;
	int j = 0;
	int leftCount = 10;
	
	while(leftCount != 1){
		
		if(arr[i] != 0){
			j++;
			if(j==3){
				printf("%d \n", arr[i]);
				j = 0;
				arr[i] = 0;
				leftCount--;
			}
		}
		
		i++;

		if(i ==10){
			i = 0;
		}
	}

	for (int i = 0; i < leftCount; ++i)
	{
		if (arr[i] != 0)
		{
			printf("The last one people is: %d.\n", arr[i]);
		}
	}

	return 0;
}