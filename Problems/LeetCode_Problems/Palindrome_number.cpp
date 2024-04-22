#include <iostream>
using namespace std;

int main()
{
    int x = 121;
    if(x < 0){
            return 0;
        }
        int num = x, ans = 0, rem;
        while(num){
            rem = num %10;
            num /= 10;
            // if(ans > INT_MAX/10)
            // return 0;
            ans = ans*10+ rem;
        }
        if(ans== x){
            return 1;
        }
        else{
            return 0;
        }
}