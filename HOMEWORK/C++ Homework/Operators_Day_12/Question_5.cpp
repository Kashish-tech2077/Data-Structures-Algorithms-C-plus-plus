#include <iostream>
using namespace std;

int main(){
    // HomeWork Question- 5: What will be the result below according to the precedence table.

    // 1-> 2*3-48==5/4*6
    // 2-> 6<<2-4*8/2
    // 3-> 5>4<3/2-8%4+5
    // 4-> 14-8+92>>2+70

   // 2*3-48==5/4*6
   // First, let's perform the operations step by step:
   int first = 6 - 48 == 1 * 6;
   int ans_1 =  -42 == 6;
   cout << "Answer 1 is: " << ans_1 << endl;

    // 6<<2-4*8/2
    int ans_2 = 6<<2-4*8/2;
    cout << "Answer 2 is: " << ans_2 << endl;

    // 5>4<3/2-8%4+5
    int ans_3 = 5>4<3/2-8%4+5;
    cout << "Answer 3 is: " << ans_3 << endl;

    // 14-8+92>>2+70
    int ans_4 = 14-8+92>>2+70;
    cout << "Answer 4 is: " << ans_4 << endl;
}