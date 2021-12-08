#include <stdio.h>
int main()
{
	int choice =0;
	printf("1.Pasta\n2.French Fries\n3. Sandwich\n4. Pizza\n5.Burger\n\n");
	printf("What would you like to eat Sir?");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: 
		printf("Food item - Pasta\n ");
		printf ("Price -Rs 179");
		break;
		case 2: 
		printf("Food item - French Fries\n ");
		printf ("Price -Rs 99");
		break;
		case 3: 
		printf("Food item - Sandwich\n");
		printf ("Price -Rs 149");
		break;
		case 4: 
		printf("Food item - Pizza\n");
		printf ("Price -Rs 239");
		break;
		case 5: 
		printf("Food item - Burger\n");
		printf ("Price -Rs 129");
		break;
		default: printf("Sorry Sir, We don't serve that here.");
		return 0;
	}
}
