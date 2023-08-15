#include <iostream>
using namespace std;
                   
int main()
{
    int n;
    cout<<"Enter no of lines: ";
    cin>>n;
    int i,j;

    for(i = 0; i < n; i++){
        cout<<"*";
        int cond = i <= n/2 ? 2*i : 2*(n-i-1);
        int k = 1;
        for(j = 0; j <= cond; j++){
            if(j <= cond/2)
                cout<<j+1;
            else
                cout<<cond-j+1;
        }
        cout<<"*";
        cout<<endl;
    } 
    return 0;
}

// Output-->
// Enter no of lines: 7
// *1*
// *121*
// *12321*
// *1234321*
// *12321*
// *121*
// *1*