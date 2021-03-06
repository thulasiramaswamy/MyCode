// C Program to Demonstrate the Check, Set, Unset, Toggle the Bit Positions in a Number
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int inpNo, Pos, Ch;
	int res;
	do
	{
	printf("\nEnter a Number - ");
	scanf("%d", &inpNo);
	
	printf("Menu :\n1)Check 2)Set 3)Unset 4)Toggle 5)Exit - ");
	scanf("%d", &Ch);
	
	switch(Ch)
	{
	case 1:
		printf("Enter the Position u Want\n");
		scanf(" %d",&Pos);
		res = inpNo & ( 1 << Pos);
		if(res)
 			printf("It is Already Set\n");
		else
 			printf("It is Unset\n");
		break;
	case 2:
		printf("Enter the position u Want to Set\n");
		scanf(" %d", &Pos);
		res = inpNo | (1 << Pos);
		printf("\n%d", res);
		break;
	case 3:
		printf("Enter the Position u Want to Unset\n");
		scanf(" %d", &Pos);
		res = inpNo & ~(1 << Pos);
		printf("\nAfter  - %d", res);		
		break;
	case 4: 
		printf("Enter the Position u Want to Toggle\n");
		scanf(" %d", &Pos);
		res = inpNo ^ ( 1 << Pos);
		printf("\n%d", res);
		break;
	case 5:
		exit(0);
		break;
	default:
		printf("Invalid Option\n");
	}
	}while(1);	
	return 0;
}
