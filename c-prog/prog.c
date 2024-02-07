include<stdio.h>
void main()
{
        int N,r1,r2,r3,r4,r5,r6;
        printf("enter the number to reverse the order: ");
        scanf("%d",&N);
        r1=N%10;
        N=N/10;
        r1=r1*10;
        r2=r1+(N%10);
        N=N/10;
        r3=(r2*10)+(N%10);
        N=N/10;
        r4=(r3*10)+(N%10);
        N=N/10;

        r5=(r4*10)+(N%10);

        N=N/10;
        r6=(r5*10)+(N%10);

        printf("the reverse number is: %d",r6);
}
