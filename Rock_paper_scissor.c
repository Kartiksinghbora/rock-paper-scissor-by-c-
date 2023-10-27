#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	printf("\t\t\t Let's Play Game\n");
	printf("\t\t========Rock Paper Scissor=======");
	
	int ch,i,num,user_score=0,comp_score=0;

	printf("\n1. Rock\n2. Paper\n3. Scissor\n0. Exit");
	do
	{
	printf("\nEnter your choice");
	scanf("%d",&ch);
	if(ch!=0)
	{
	
	printf("computer choice is");
		num=rand()%3+1;
		printf("%d",num);
	
}
	switch(ch)
	{
		case 1 : if(ch==num)
		{
			printf("__Draw");
		}
		else if(num==2)
		{
			printf("__You lose");
			comp_score++;
		}
		else if(num==3)
		{
			printf("__You win");
			user_score++;
		}
		 break;
		 
			
		case 2 : if(ch==num)
		{
			printf("__Draw");
		}
		else if(num==3)
		{
			printf("__You lose");
			comp_score++;
		}
		else if(num==1)
		{
			printf("__You win");
			user_score++;
		}
		 break;
		 
		 
		case 3 : if(ch==num)
		{
			printf("__Draw");
		}
		else if(num==2)
		{
			printf("__You win");
			user_score++;
		}
		else if(num==1)
		{
			printf("__You lose");
			comp_score++;
		}
		 break;
		 
		 
		case 0: goto end;
//		default: printf(" invalid option");
		 	
	} // end of switch
	}	
 while(1);
end:
	printf("\n\n GAME OVER");
	printf("\n\nFINAL SCORE");
	
	printf("\nYour Score=%d\nComputer Score=%d",user_score,comp_score);
	
	if(user_score==comp_score)
	{
		printf("\nDRAW");
	}
	else if(user_score>comp_score)
	{
		printf("\nYou WIN" );
	}
	else
	{
		printf("\nComputer WIN" );
	}
	getch();
}
