#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {4,5,12,51,53};
    int x = 51;
    int index = -1;

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == x){
            index = i;
            break;
        }
    }
    cout << index;

    return 0;
}