#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int answer[15]={1,2,3,2,1,2,2,1,4,4,1,2,2,1,3};//ANSWER KEY global declaration so that it can be used in other files as well as functions too
#include "questions.c"//QUESTIONS FILE
#include "options.c"//OPTIONS FILE
#include "doubledip.c"// DOUBLEDIP LIFELINE FUNCTION FILE
#include "50-50.c"//50-50 LIFELINE FUNCTION FILE
#include "instructions.c"


int main()
    {
      system("clear");//clear screen
      instructions();//calls instructions function whic prints instructions
      printf("press enter to continue");
      getchar();// wait for user to press enter
      fflush(stdin);//to clear input stream so that any residue remained in input stream does not interrupts with the further scanf's
      char FF[2][50]={" ","[50-50 lifeline -5050]"};//THIS 2D ARRAY IS USED TO PRINT LIFELINE OPTION WHEN AVAILABLE OTHERWISE THIS STRING " " IS USED
      char DD[2][50]={" ","[DoubleDip lifeline - 22]"};//THIS 2D ARRAY IS USED TO PRINT LIFELINE OPTION WHEN AVAILABLE OTHERWISE THIS STRING " " IS USED
      int dd =1,ff=1;//THESE TWO INTEGERS ARE USED TO SWITCH BETWEEN LIFELINE STRING AND " " STRING
      int prize[15]={1000,2000,5000,10000,20000,40000,80000,160000,320000,640000,1250000,2500000,5000000,10000000,70000000};//THIS STORES PRIZE MONEY FOR EACH QUESTION
      int Q[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};//THIS FILE STORES QUESTION NUMBER
      int win =0;//THIS INTEGER STORES CURRENT WIN AMOUNT
      int lev[4]={0,10000,320000,10000000};//THESE ARRAY STORES ALL FALLBACK LEVELS
      system("clear");//USED TO CLEAR SCREEN
      printf ("\t\tWelcome to  KBC\n");
      int level=0;//THIS INTEGER IS USED TO STORE THE  FALLBACK LEVEL YOU ARE IN
      int ans=0;//THE INPUT FROM USERS IS STORED IN THIS INTEGER


      for (int i=0;i<=14&&ans!=9211;i++)// WHEN ans=9211 THE GAME STOPS
        {

            if (win>=10000)//CONDITION FOR  FALLBACK LEVEL 10,000
            level=1;
            if (win>=320000)// CONDITION FOR FALLBACK LEVEL 3,20,000
            level=2;
            if (win>=10000000)//CONDITION FOR FALLBACK LEVEL 1,00,00,000
            level=3;


            printf("\nQuestions for Rs %d \t Wrong Ans-Rs %d\t Quit-Rs %d\n",prize[i],lev[level],win);//PRINTS WIN AMOUNT FOR ALL POSIBILITIES
            printf("\nQ%d %s \t [Quit-9211]\t %s\t%s\n\n1:%s\n2:%s\n3:%s\n4:%s\n Your Response\t",i+1,arr[i],DD[dd],FF[ff],A[i],B[i],C[i],D[i]);/*PRINTS QUESTIONS ,OPTIONS AND LIFELINES TOO(IF AVAILABLE CONTROLLED BY INTEGERS dd AND ff)*/
            scanf("%d",&ans); //INPUT FROM USER TO CHOOSE FOR CORRECT ANSWER ,QUIT AND LIFELINES
            system("clear");//CLEAR SCREEN


            if (ans==5050&&ff==1)//FOR 50-50 LIFELINE WHEN IT IS AVAILABLE i.e. ff=1
              {
                system("clear");//CLEAR SCREEN
                ff=0;//UPDATES THE VALUE OF CONTROLLING INTEGER OF FIFTY FIFTY LIFELINE(TURNING IT OFF)
                ans =fifty(i);//CALL OF FIFTY FUNCTION
              }
            else if (ans==5050&&ff==0)//WHEN 50-50 LIFELINE IS NOT AVAILABLE i.e. ff=0
              {
                i--;//TO START THIS ITERATION FROM BEGINING
                printf("\nyou have already used that lifeline\n");//INFORMS THE USER THAT THIS LIFELINE IS BEING USED
              }


            if (ans==22&&dd==1)////FOR DOUBLEDIP LIFELINE, WHEN IT IS AVAILABLE i.e. dd=1
              {
                system("clear");//CLEAR SCREEN
                dd=0;//UPDATES THE VALUE OF CONTROLLING INTEGER OF DOUBLEDIP LIFELINE(TURNING IT OFF)
                ans =doubledip(i);// CALL OF DOUBLEDIP FUNCTION
              }
            else if (ans==22&&dd==0)//WHEN DOUBLEDIP LIFELINE IS NOT AVAILABLE i.e. ff=0
              {
                i--;//TO START THIS ITERATION FROM BEGINING
                printf("\nyou have already  used that lifeline\n");//INFORMS THE USER THAT THIS LIFELINE IS BEING USED
              }



            if (ans==answer[i]) //CONDITION FOR CORRECT ANSWER
              {
              win=prize[i]; //UPDATES WIN PRIZE
              }
            else if (ans!=answer[i]&&ans<=4&&ans>0)//CONDITION FOR INCORRECT ANSWER
              {
                win=lev[level];//TAKE YOU TO THE LAST FALLBACK LEVEL (DECIDED BY INTEGER level)
                printf("Your answer is wrong \nThe correct ans was option %d \n",answer[i]);//INFORM USER ABOUT HIS WRONG ANSWER AND CORRECT ANS
                ans =9211 ;//UPDATES THE INTEGER TO STOP THE GAME
              }
            else if (ans!=9211&&ans!=22&&ans!=5050)//CONDITION FOR INVALID INPUT
              {
                printf("\n\t\tPlease enter a valid input\n");//ASKS USER FOR VALID INPUT
                i--;//TO REPEAT THIS ITERATION
              }

        }

      printf ("you won %d \n",win);//INFORMING USER ABOUT HIS WIN

    }
