
  int fifty(int i)// declaration of 50-50 lifeline function

    {
      int a=i,b=i,c=i,d=i ;//Integers that control printing of options
      int count=0,ans;//Integers that control iterations


      if (answer[i]==1||answer[i]==3)//Condition for answer to be 1 or 3
        {
          d=15;//Updates integer so that option 4 does not get print
          b=15;//Updates integer so that option 2 does not get print
        }

      else if(answer[i]==2||answer[i]==4)//Condition for answer to be 2 or 4
        {
          a=15;//Updates integer so that option 1 does not get print
          c=15;//Updates integer so that option 3 does not get print
        }



      while (count!=1)

        {
          printf("\nQ%d %s \n1:%s\n2:%s\n3:%s\n4:%s\n Your Response\t",i+1,arr[i],A[a],B[b],C[c],D[d]);//when a=i,b=i,c=i,d=i it prints corresponding option but when a=15  b=15 c=15 d=15 it does print " " in place of option
          scanf("%d",&ans); //Taking input from user
          system("clear");//clear screen


          if (b==15)//Condition for one of the option 1 or 3 to be correct
            {
              if (ans==1||ans==3)//If input of user is 1 or 3
                  {
                    count++;
                    return ans;//returns ans for checking whether it is correct or not
                  }


              else//If user enters input other than 1 or 3
                  printf("\n INPUT INVALID");

            }



          else if(a==15)//Condition for one of the option 2 or 4 to be correct

            {
              if (ans==2||ans==4)//If input of user is 2 or 4
                {
                  count++;
                  return ans;//returns ans for checking whether it is correct or not
                }


              else//If user enters input other than 2 or 4
                  printf("\nINPUT INVALID");

            }
        }

    }
