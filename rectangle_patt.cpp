#include <iostream>
using namespace std;

int main()
{
    int row,col = 0;
    cout<<"Enter row: ";
    cin>>row;
    cout<<"Enter col: ";
    cin>>col;
    cout<<endl;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"* ";
        }
        cout<<endl;
    } 
    return 0;
}

// Output -->
// Enter row: 10
// Enter col: 10
// * * * * * * * * * *
// * * * * * * * * * *
// * * * * * * * * * *
// * * * * * * * * * *
// * * * * * * * * * *
// * * * * * * * * * *
// * * * * * * * * * *
// * * * * * * * * * *
// * * * * * * * * * *
// * * * * * * * * * * 