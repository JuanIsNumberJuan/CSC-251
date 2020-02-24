/*
Juan Delgado
CSC-251
1/28/20
Lab #4
*/

#include<stdio.h>
#include<stdlib.h>

char prompt();
double average();
void print();

int main(void)
{
  int aCounter=0, bCounter=0, cCounter=0, dCounter=0, fCounter=0;
  double count = 0, total;
  char grade;

  do {
    grade = prompt();
    switch(grade){
      case 'a':
      case 'A':
        aCounter++;
        count++;
      break;
      case 'b':
      case 'B':
        bCounter++;
        count++;
      break;
      case 'c':
      case 'C':
        cCounter++;
        count++;
      break;
      case 'd':
      case 'D':
        dCounter++;
        count++;
      break;
      case 'f':
      case 'F':
        fCounter++;
        count++;
      break;
    }
  } while(grade!='z' && grade !='Z');
  total = average(aCounter, bCounter, cCounter, dCounter, count);
  print(aCounter, bCounter, cCounter, dCounter, fCounter, total);

}

char prompt(void)
{
  char a;
  printf("\nEnter a grade (z to quit): ");
  scanf(" %c", &a);
  return a;
}

double average(int countA, int countB, int countC, int countD, double counter)
{
  double total = (4*countA + 3*countB + 2*countC + countD)/counter;
  return total;
}

void print(int countA, int countB, int countC, int countD, int countF, double average){
  printf("There are %d A's, %d B's, %d C's, %d D's, and %d F's", countA, countB, countC, countD, countF);
  printf("\nThe class average is %.2f\n",average);
}
