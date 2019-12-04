#pragma warning(disable : 4996)
#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<string.h>
#define user "³ÂÍúÍú"
#define PAS "123456"
int main()

{
	char name[10];
	char password[10];
	printf("please enter your name#");
	scanf("%s", name);
	printf("please enter your password#");
	scanf("%s", password);
	int count = 3;
	while (count > 0)
	{
		count--;
		if (strcmp(user, name) == 0 && strcmp(PAS, password) == 0)
		{
			printf(" loging success !\n");
			break;
		}
		else
		{
			printf("name error or password error ,try agin ! you have %d times\n",count);
		}
	}
	if (count > 0)
	{
		printf("login sucess");
	}
	else
	{
		printf(" login failed");
	}

	/*int i = 9;
	while (i>=0)
	{
		printf("%d\r", i);
		Sleep(1000);
		i--;
	}*/
	/*char arr1[] = "weclome to bit.......";
	char  arr2[] = "###################";

	int left = 0;
	int right = strlen(arr1) - 1;

	while (left <= right)
	{

		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\r", arr2);
		Sleep(1000);
	}
	printf("\n");
*/
	system("pause");
	return 0;
}