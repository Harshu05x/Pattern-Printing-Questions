#include <iostream>
using namespace std;
                   
int main()
{
    int n;
    cout<<"Enter num: ";
    cin>>n;

    for(int i = 0; i < 2*n; i++){
        int cond = i < n ? i : n+(n-i-1);
        int space = i < n ? 2 *(n-cond-1) : i - cond -1;
        for(int j = 0; j < 2*n; j++){
            if(j <= cond)
                cout<<"*";
            else if(space > 0){
                cout<<" ";
                space--;
            }
            else
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

// Output-->
// Enter num: 9
// *                *
// **              **
// ***            ***
// ****          ****
// *****        *****
// ******      ******
// *******    *******
// ********  ********
// ******************
// ******************
// ********  ********
// *******    *******
// ******      ******
// *****        *****
// ****          ****
// ***            ***
// **              **
// *                *