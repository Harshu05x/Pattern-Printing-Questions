#include <iostream>
using namespace std;
                   
int main()
{
    int row,col = 0;
    int i,j = 0;

    cout<<"Enter row: ";
    cin>>row;  

    for(i = 1; i < row+1; i++){
        for(j = row - i; j > 0; j--)
            cout<<" ";
        for(j = 1; j < i+1; j++)
            cout<<j+i-1;
        for(j = i-1; j > 0;j--)
            cout<<j+i-1;
        cout<<endl;
    }  
    return 0;
}

// Output -->
// Enter row: 5
//     1
//    232
//   34543
//  4567654
// 567898765