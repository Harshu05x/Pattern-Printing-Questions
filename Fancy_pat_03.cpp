#include <iostream>
using namespace std;
                   
int main()
{
    int n;
    cout<<"Enter no of lines: ";
    cin>>n;
    int i,j;
    int k = 1;

    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++){
            cout<<k++;
            if(j != i)
                cout<<"*";
        }
        cout<<endl;
    }
    int start = k - n;
    for(i = 0; i < n; i++){
        int c = start;
        for(j = n-i-1; j >= 0; j--){
            cout<<c++;
            if(j != 0)
                cout<<"*";
        }
        start -= (n-i-1);
        cout<<endl;
    }
 
    return 0;
}

// output -->
// Enter no of lines: 4
// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 7*8*9*10
// 4*5*6
// 2*3
// 1