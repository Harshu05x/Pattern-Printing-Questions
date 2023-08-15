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
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(i = 0;i<row;i++){
        for(j = 0;j<i+1;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    return 0;

}

// Output -->
// Enter row: 8
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4 5 6
// 1 2 3 4 5 6 7
// 1 2 3 4 5 6 7 8

// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 
// 6 6 6 6 6 6 
// 7 7 7 7 7 7 7 
// 8 8 8 8 8 8 8 8 