#include<stdio.h>
int main(void){
    int i,n,s=0;
    scanf("%d",&n);
    for(i=0;i<=10;i++){
        printf("%d\n",i);
    s=i+s;
    }
    printf("合計は%dです\n",s);
    return 0;
}