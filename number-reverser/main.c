#include <stdio.h>

long long nums;

long long reverse_number(long long num){
    long long reversednum = 0;
    while(num != 0){
        long long remains = num % 10;
        reversednum = reversednum * 10 + remains;
        num = num / 10;
    }
    return reversednum;
}


int main(){
scanf("%lld",&nums);
long long result = reverse_number(nums);
printf("%lld",result);
}