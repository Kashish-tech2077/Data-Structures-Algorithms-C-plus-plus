#include <iostream>
using namespace std;

// Prime Number Check
bool Prime(int n)
{
   if(n < 2){
    return 0;
   } 
   for(int i = 2; i <= n; i++){
    if(n % i == 0){
        return 0;
    } 

    return 1; 

   }
}

// Factorial
int Factorial(int n){
    int ans = 1;
    for(int i = 1; i <= n; i++){
        ans = ans * i;
    }
    return ans;
}

int main()
{
    int a, b;
    cout << "Enter the Numbers: ";
    cin >> a >> b;

    // A is Prime or Not?
    cout << Prime(a) << endl;
    // Factorial of A
    cout << Factorial(a);
    // B is Prime or Not?
    cout << Prime(b) << endl;
    // Factorial of B
    cout << Factorial(b) << endl;
    // B-A is Prime or Not?
    cout << Prime(b-a) << endl;
    // Factorial of B-A
    cout << Factorial(b-a) << endl;

}