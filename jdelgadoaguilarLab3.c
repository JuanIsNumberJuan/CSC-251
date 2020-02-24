/*
Juan Delgado
CSC-251
1/28/20
Lab #3
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int aCounter=0, bCounter=0, cCounter=0, dCounter=0, fCounter=0;
  double average = 0, counter = 0, total = 0;
  char grade;

  do {
    printf("\nEnter a grade (z to quit): ");
    scanf(" %c", &grade );
    if(grade == 'a' || grade =='A'){
      aCounter++;
      counter++;
      total+=4;
    }
    else if(grade == 'b' || grade =='B'){
      bCounter++;
      counter++;
      total+=3;
    }
    else if(grade == 'c' || grade =='C'){
      cCounter++;
      counter++;
      total+=2;
    }
    else if(grade == 'd' || grade =='D'){
      dCounter++;
      counter++;
      total+=1;
    }
    else if(grade == 'f' || grade =='F'){
      fCounter++;
      counter++;
    }
  } while(grade!='z' && grade !='Z');

  average = total / counter;
  printf("\nThere are %d A's, %d B's, %d C's, %d D's, and %d F's", aCounter, bCounter, cCounter,dCounter,fCounter);
  printf("\nThe class average is %.2f \n", average );
}
