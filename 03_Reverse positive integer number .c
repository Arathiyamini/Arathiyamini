#include <stdio.h>

int main() {
    int n,r,rev=0,t;
    printf("\nEnter an integer value:");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
}
printf("\n The Reverse of %d is %d",t,rev);
}

//OUTPUT
Enter an integer value:234

 The Reverse of 234 is 432
