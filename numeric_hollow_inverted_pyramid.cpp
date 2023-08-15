#include <iostream>
using namespace std;
                   
int main()
{
    int n;
    cout<<"Enter no of lines: ";
    cin>>n;
    int i,j;
    for(i = 0; i <= n; i++){
        for(j = i+1; j <= n; j++){
            if(i == 0 || j == i+1 || j == n)
                cout<<j;
            else cout<<" ";
        }

        cout<<endl;
    } 
    return 0;
}

// Output-->
// Enter no of lines: 5
// 12345
// 2  5
// 3 5
// 45
// 5