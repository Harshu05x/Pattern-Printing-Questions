#include <iostream>
using namespace std;
                   
int main()
{
    int row = 0;
    int i,j = 0;
    cout<<"Enter row: ";
    cin>>row;

    for(i = 0;i<row;i++){
        for(j = 0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;

}

// Output -->
// Enter row: 8
// * 
// * * 
// * * * 
// * * * * 
// * * * * *
// * * * * * *
// * * * * * * *
// * * * * * * * *