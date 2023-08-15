#include <iostream>
using namespace std;
                   
int main()
{
    int row,col = 0;
    int i,j = 0;
    cout<<"Enter row: ";
    cin>>row;
    cout<<"Enter col: ";
    cin>>col;
    cout<<endl;   

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i == 0 || i == row - 1)
                cout<<"* ";
            else{
                if(j == 0 || j == col - 1)
                    cout<<"* ";
                else 
                    cout<<"  ";
            }
        }
        cout<<endl;
    } 
    return 0;
}

// Output -->
// Enter row: 8
// Enter col: 8
// * * * * * * * *
// *             *
// *             *
// *             *
// *             *
// *             *
// *             *
// * * * * * * * *