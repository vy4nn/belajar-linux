#include <stdio.h>

int main()
{
	int choice;
	printf("Please Choice Your Difficulties:\n1.Easy(1-10)\n2.Normal(1-50)\n3.Hard(1-100)\n");
	scanf("%d", &choice);
	while (choice > 3 || choice <= 0)
	{
		printf("There is no Choice Available! Try Another Choices\n");
		scanf("%d", &choice);
	}
	if (choice == 1)
	{
		int secret = 7;
	int guess;
	int count = 0;
	printf("Guess The Number Beetween (0-10)\n");
	scanf("%d", &guess);
	while (guess > 10 || guess < 0)
	{
		printf("You out of range! Please Check the Range and try Again\n");
		scanf("%d", &guess);
	}
	printf("Attempt %d: %d\n", count + 1, guess);
	while (guess != secret)
	{
		if (guess < secret)
		{
			printf("Higher!\n");
		}
		else
		{
			printf("Lower!\n");
		}
		printf("Wrong!\n");
		printf("Guess The Number Beetween (0-10)\n");
		scanf("%d", &guess);
		while (guess > 10 || guess <= 0)
	{
		printf("You out of range! Please Check the Range and try Again\n");
		scanf("%d", &guess);
	}
		count++;
		printf("Attempt %d: %d\n", count + 1, guess);
	}
	printf("Congratulation You Guess it Right\n");
	}
	if (choice == 2)
	{
		int secret = 23;
	int guess;
	int count = 0;
	printf("Guess The Number Beetween (0-50)\n");
	scanf("%d", &guess);
	while (guess > 50 || guess < 0)
	{
		printf("You out of range! Please Check the Range and try Again\n");
		scanf("%d", &guess);
	}
	printf("Attempt %d: %d\n", count + 1, guess);
	while (guess != secret)
	{
		if (guess < secret)
		{
			printf("Higher!\n");
		}
		else
		{
			printf("Lower!\n");
		}
		printf("Wrong!\n");
		printf("Guess The Number Beetween (0-50)\n");
		scanf("%d", &guess);
		while (guess > 50 || guess <= 0)
	{
		printf("You out of range! Please Check the Range and try Again\n");
		scanf("%d", &guess);
	}
		count++;
		printf("Attempt %d: %d\n", count + 1, guess);
	}
	printf("Congratulation You Guess it Right\n");
	}
	if (choice == 3)
	{
	int secret = 65;
	int guess;
	int count = 0;
	printf("Guess The Number Beetween (0-100)\n");
	scanf("%d", &guess);
	while (guess > 100 || guess < 0)
	{
		printf("You out of range! Please Check the Range and try Again\n");
		scanf("%d", &guess);
	}
	printf("Attempt %d: %d\n", count + 1, guess);
	while (guess != secret)
	{
		if (guess < secret)
		{
			printf("Higher!\n");
		}
		else
		{
			printf("Lower!\n");
		}
		printf("Wrong!\n");
		printf("Guess The Number Beetween (0-100)\n");
		scanf("%d", &guess);
		while (guess > 100 || guess <= 0)
	{
		printf("You out of range! Please Check the Range and try Again\n");
		scanf("%d", &guess);
	}
		count++;
		printf("Attempt %d: %d\n", count + 1, guess);
	}
	printf("Congratulation You Guess it Right\n");
	}
	return 0;
}
