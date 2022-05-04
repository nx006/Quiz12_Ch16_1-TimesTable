#include <stdio.h>

int arr[9][9];

void Make99()
{
	int max_times = 9; //최대 단수 = 9단까지
	for (int i = 0; i < max_times; i++)
		for (int j = 0; j < max_times; j++)
			arr[i][j] = (i + 1) * (j + 1);
}

// print and return a * b, searching from arr tables.
int Find99(int a, int b)
{
	int result = arr[a - 1][b - 1];
	printf("%d * %d = %d\n", a, b, result);
	return result;
}

int getPosition()
{
	int userInput = 0;
	while (userInput < 1 || userInput > 9) {
		printf("1~9까지 정수 입력: ");
		scanf_s("%d", &userInput);
		if (userInput < 1 || userInput > 9) 
			printf("%d는 1부터 9까지의 숫자가 아닙니다. 다시입력하시오\n", userInput);
	}
	return userInput;
}

int main(void)
{
	Make99();
	int x = 0, y = 0;
	x = getPosition();
	y = getPosition();
	Find99(x, y);

	return 0;
}