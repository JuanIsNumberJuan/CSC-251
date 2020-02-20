/*
Juan Delgado
CSC-251
02/16/2020
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int prompt();
int generator();
void results();
int main(void)
{
  srand(time(NULL));
  int userInput = prompt();
  int a, countOne=0, countTwo=0, countThree=0, countFour=0, countFive=0, countSix=0, countSeven=0, countEight=0, countNine=0, countTen=0;
  while(userInput!=0)
  {
    a = generator();
    switch(a)
    {
      case 1:
        countOne++;
        break;
      case 2:
        countTwo++;
        break;
      case 3:
        countThree++;
        break;
      case 4:
        countFour++;
        break;
      case 5:
        countFive++;
        break;
      case 6:
        countSix++;
        break;
      case 7:
        countSeven++;
        break;
      case 8:
        countEight++;
        break;
      case 9:
          countNine++;
          break;
      case 10:
        countTen++;
        break;
      default:
        break;
      }
      userInput--;
    }
    results(countOne, countTwo, countThree, countFour, countFive, countSix, countSeven, countEight, countNine, countTen);
}


int prompt()
{
  int a;
  printf("How many times would you like to roll the 10 sided die? ");
  scanf("%d", &a);
  return a;
}
int generator()
{
  //srand(time(0));
  int x = rand()%10+1;
  return x;
}
void results(int a, int b, int c, int d, int e , int f, int g, int h, int i, int j)
{
  printf("You had \n%d ones \n%d twos \n%d threes \n%d fours \n%d fives \n%d sixes \n%d sevens \n%d eights \n%d nines \n%d tens\n", a,b,c,d,e,f,g,h,i,j);
}
