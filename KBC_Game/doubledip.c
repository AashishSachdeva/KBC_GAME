
  int doubledip (int i )

    {
      int a=i,b=i,c=i,d=i;//Integers that control printing of options
      int count=0,ans;//Integers that control iterations


      while (count!=2)
        {

          printf("\nQ%d %s \n1:%s\n2:%s\n3:%s\n4:%s\n Your Response\t",i+1,arr[i],A[a],B[b],C[c],D[d]);//when a=i,b=i,c=i,d=i it prints corresponding option but when a=15  b=15 c=15 d=15 it does print " " in place of option
          scanf("%d",&ans); //Taking input from user
          system("clear");


          if (ans ==answer[i])//If input is the correct answer
            {
              return ans ;//returns ans to update the win prize
            }

          else if (ans!=answer[i]&&ans<=4) //If input was valid but wrong answer
            {



              if (ans ==1)//If Input from user is option 1
                {
                  if (a==15)//condition that same answer is chosen second time (which was wrong)
                  {
                    printf ("you have already chosen that ans and that ans is wrong\n");
                    count--;//to repeat this iteration
                  }

                  else if (count<1)//condition for option chosen first time  is wrong
                      printf("\nYour answer was wrong");
                  a=15;//To update the controlling integer so that same answer cannot be taken twice
                }



              if (ans ==2)//If Input from user is option 1
                {
                  if (b==15)//condition that same answer is chosen second time (which was wrong)
                    {
                      printf ("you have already chosen that ans and that ans is wrong\n");
                      count--;//to repeat this iteration
                    }
                  else if (count<1)//condition for option chosen first time  is wrong
                      printf("\nYour answer was wrong");
                  b=15;
                }



              if (ans==3)//If Input from user is option 1
                {
                  if (c==15)//condition that same answer is chosen second time (which was wrong)
                    {
                      printf ("you have already chosen that ans and that ans is wrong\n");
                      count--;//to repeat this iteration
                    }
                else if (count<1)//condition for option chosen first time  is wrong
                      printf("\nYour answer was wrong");
                c=15;
                }



              if (ans==4)//If Input from user is option 1
                {
                  if (d==15)//condition that same answer is chosen second time (which was wrong)
                    {
                      printf ("you have already chosen that answer and that answer is wrong\n");
                      count--;//to repeat this iteration
                    }
                  else if (count<1)//condition for option chosen first time  is wrong
                      printf("\nYour answer was wrong");
                  d=15;
                }
              count ++;//to move to next iteration

              if (count==1)//condition that it was first chance and input is wrong answer
              printf("\nYou have one  more chance left\n");
            }
          else //If input is invalid
            {
              printf("\nplease enter a valid input\n");
            }

        }
      return ans;//returning ans for evaluation again
    }
