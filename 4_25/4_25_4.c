#include <stdio.h>

int main(void) {
    int num;
    scanf("%d",&num);
// 奇数か偶数かを判定しよう
if(num %2==0){
    printf("%dは偶数です\n",num);
}else{
printf("%dは奇数です\n",num);
}


    return 0;
}