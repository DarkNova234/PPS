#include<stdio.h>
int main()
{
    int n,i,j,count;
    printf("Enter any number: ");
    scanf("%d",&n);

    printf("The prime numbers between 1 and %d are: \n",n);

    for(i=2;i<=n;i++)
    { count=0;
     for(j=1;j<=i;j++)
        {
            if(i%j==0)
                count++;
        }
     if(count==2)
        { printf("%d  ",i);
        }
     /*else if(count>2)
        { printf("%d is not a prime number\n",i);
        }*/
    }
}