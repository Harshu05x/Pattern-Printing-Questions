#include <iostream>
using namespace std;
                   
int main()
{
    int n;
    cout<<"Enter no of lines: ";
    cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++)
            j == i ? cout<<i+1 : cout<<i+1<<"*";
        cout<<endl;
    } 
    for(int i = 0; i < n; i++){
        for(int j = n-i-1; j >= 0; j--)
            j == 0 ? cout<<n-i : cout<<n-i<<"*";
        cout<<endl;
    } 
    return 0;
}

// Output-->

// Enter no of lines: 9
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5
// 6*6*6*6*6*6
// 7*7*7*7*7*7*7
// 8*8*8*8*8*8*8*8
// 9*9*9*9*9*9*9*9*9
// 9*9*9*9*9*9*9*9*9
// 8*8*8*8*8*8*8*8
// 7*7*7*7*7*7*7
// 6*6*6*6*6*6
// 5*5*5*5*5
// 4*4*4*4
// 3*3*3
// 2*2
// 1