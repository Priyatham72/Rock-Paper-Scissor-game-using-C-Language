#include<stdio.h>
void main()
//Only main function is used for this program.
{
int comp,player,cp=0,pp=0,wp;
//cp=Computer points,pp=player points and wp=winning points;
//Computer and player points are initially set to zero;
//Now the above variables are accepted.
printf("\n SET WINNING POINTS : ");
scanf("%d", &wp);
//Winning points set by the player are stored as wp
printf("\n INSTRUCTIONS;");
printf("\n Press 1 For Rock");
printf("\n Press 2 For Paper");
printf("\n Press 3 For Scissors");
printf("\n Points To Win The Game Is %d", wp);
//while loop stops iterating when either the Computer points
//or the player points equal to the winning point.
while(cp!=wp && pp!=wp)
{
comp = (rand()%3)+1;
//rand() function splits out any random number.
//This random number when divided by 3 gives 0,1 or 2 as remainders.
//These remainders are added by 1 to get rock/paper/scissors.
printf("\n\t SCORES :\n\tComp = %d\n\tYou = %d",cp,pp);
printf("\nEnter your choice : ");
scanf("%d", &player);
if(comp==1 && player==1)
{printf("Rock × Rock\n\t OOPS! IT'S A DRAW");}
else if(comp==2 && player==2)
{printf("Paper × Paper\n\t OOPS! IT'S A DRAW");}
else if(comp==3 && player==3)
{printf("Scissors × Scissors\n\t OOPS! IT'S A DRAW");}
//points are not awarded when the game is draw
else if(comp==1 && player==2)
{printf("Rock × Paper\n\t Oo YEAH! YOU WIN");pp++;}
// point is added everytime when player wins
else if(comp==1 && player==3)
{printf("Rock × Scissors\n\t COMPUTER STEALS THE POINT");cp++;}
//point is added everytime when computer wins
else if(comp==2 && player==1)
{printf("Paper × Rock\n\t COMPUTER STEALS THE POINT");cp++;}
else if(comp==2 && player==3)
{printf("Paper × Scissors\n\t Oo YEAH! YOU WIN");pp++;}
else if(comp==3 && player==1)
{printf("Scissors × Rock\n\t Oo YEAH! YOU WIN");pp++;}
else if(comp==3 && player==2)
{printf("Scissors × Paper\n\t COMPUTER STEALS THE POINT");cp++;}
else
{printf("The Number Is Invalid, Read The Instructions");}
//All the above conditions are created according to the game algorithm
}
//Thi Statement Printed when player wins the game
if(pp==wp)
printf("\n CONGRATULATIONS!! You Won The Game");
//This statement is printed when computer wins the game
else
printf("\n SORRY! You Lost The Game");
printf("\n Thanks For Playing");}