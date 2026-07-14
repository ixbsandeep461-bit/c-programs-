#include <stdbool.h>
bool isPalindrome(int x) {
    long long int rev=0;
    int temp=x;
    while(x>0){
        int digit =x%10;
        rev=rev*10+digit;
        x=x/10;
    }
    if(temp==rev){
        return true;
    }
    else{
        return false;
    }
}
