#include <iostream>
using namespace std;
                   
int main()
{
    int n;
    cout<<"Enter no of lines: ";
    cin>>n;
    int i,j;
    for(i = 0; i < n; i++){
        for(j = n-i-1; j >= 0; j--)
            cout<<" ";
        for(j = 1; j <= i+1; j++)
            cout<<j;
        for(j = i; j > 0; j--)
            cout<<j;
        cout<<endl;

    } 
    return 0;
}

// Output-->
// Enter no of lines: 8
//         1
//        121
//       12321
//      1234321
//     123454321
//    12345654321
//   1234567654321
//  123456787654321