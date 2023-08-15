#include <iostream>
using namespace std;
                   
int main()
{
    int n;
    cout<<"Enter no of lines: ";
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int j = n-i-1; j >= 0; j--)
            cout<<" ";
        int c = 1;
        for(int j = 1; j <= i; j++){
            cout<<c<<" ";
            c = c * (i - j) / j;
        }
        cout<<endl;
    }
    return 0;
}

// output-->
// Enter no of lines: 6
//      1
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1
// 1 5 10 10 5 1