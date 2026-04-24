#include <stdio.h>

int	main(void)
{
	printf("Testing I/O formatting:\n");

	int	age = 22;
	char ch = 'a';
	char str[] = "GeeksforGeeks";
	float number = 9.365;

	printf("\nAge\n");
	printf("%20d\n", age);
	printf("%-20d\n", age);
	printf("%20.5d\n", age);
	printf("%-20.5d\n", age);

	printf("\nCharacter\n");
	printf("%20c\n", ch);
	printf("%-20c\n", ch);
	//printf("%20.5c\n", ch);  Undefined behavior
	//printf("%-20.5c\n", ch); Undefined behavior

	printf("\nStrings\n");
	printf("%20s\n", str);
	printf("%-20s\n", str);
	printf("%20.5s\n", str);
	printf("%-20.5s\n", str);

	printf("\nFloating number\n");
	printf("%20f\n", number);
	printf("%-20f\n", number);
	printf("%20.5f\n", number);
	printf("%-20.5f\n", number);
	printf("%20.5g\n", number); // As defined
	printf("%-20.5g\n", number);// As defined

	printf("\n\nFputs: outputs strings without format specifiers\n");
	fputs("This is my string", stdout);
	fputs("This is my string", stderr);
	fputs("This is my string\n", stdout);
	return (0);
}
