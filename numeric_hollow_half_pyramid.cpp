#include <iostream>
using namespace std;
                   
int main()
{
    int n,i,j;
    cout<<"Enter no of lines: ";
    cin>>n;

    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++){
            if(j == 0 || j == i || i == n - 1)
                cout<<j+1;
            else 
                cout<<" ";
        }
        cout<<endl;
    }  
    return 0;
}

// output-->
// Enter no of lines: 8
// 1
// 12
// 1 3
// 1  4
// 1   5
// 1    6
// 1     7
// 12345678