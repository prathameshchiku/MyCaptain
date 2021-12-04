#include <stdio.h>
int main ()
{
	printf("Enter marks:");
	int n=0;
	scanf("%d", &n);
	printf("%s",n>85?"Grade A":(n>70 && n<=84?"Grade B":(n>55 && n<=69?"Grade C":(n>40 && n<54?"Grade D":"Grade F"))));
	return 0;
}

