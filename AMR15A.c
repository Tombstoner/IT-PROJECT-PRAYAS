#include <stdio.h>
int main(void)
{
    int t,i=0,j,count=0;
    scanf("%d",&t);
    while(i!=t){
        scanf("%d",&j);
        if (j%2==0)
            count+=1;
        else 
            count-=1;
        i++;
    }
    if (count>0)
        printf("READY FOR BATTLE");
    else 
        printf("NOT READY");
    return 0;
}
