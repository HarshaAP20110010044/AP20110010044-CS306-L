#include <stdio.h>
int check_string(char *inp)
{
    int  state=1,i=0;
    char ch;
     while(inp[i]!='\0')
    {
        ch=inp[i];
        switch(state)
        {
        case 1: if(ch=='a')
        {
         state=2;
            
        }
         else if(ch=='b')
         {
         state=4;
             
         }
         else
                   {
                        printf("invalid token");
                        exit(0);
                   }
         
        break;
        
        case 2:if(ch=='a')
        {
        state=3;
            
        }
        else if(ch=='b')
        {
        state=4;
            
        }
        else
                   {
                        printf("invalid token");
                        exit(0);
                   }

        break;
        
        case 3:if(ch=='a')
        {
        state=3;
        }
        else  if(ch=='b')
        {
        state=4;
        }
        else
                   {
                        printf("invalid token");
                        exit(0);
                   }
        break;
        
        case 4:if(ch=='a')
        {
        state=2;
            
        }
        else  if(ch=='b')
        {
        state=5;
            
        }
        else
                   {
                        printf("invalid token");
                        exit(0);
                   }
       
        break;
        
        case 5:if(ch=='a')
        {
        state=2;
            
        }
        else if(ch=='b')
        {
        state=5;
            
        }
        else
                   {
                        printf("invalid token");
                        exit(0);
                   }
      
        break;
    }
    i++;
    }
    if(state==3||state==5)
    return 1;
    else
    return 0;
}

int main()
{
    int i=0,j,n,res;
    char inp[20];
    printf("Enter the number of strings that you want to check: \n");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        printf("Enter the String[%d]:\n",j);
        scanf("%s",inp);
        res=check_string(inp);
        if(res==1)
        printf("The string[%d] is accepted\n",j);
        else if(res==0)
        printf("The string[%d] is not accepted\n",j);
    }
    return 0;
}