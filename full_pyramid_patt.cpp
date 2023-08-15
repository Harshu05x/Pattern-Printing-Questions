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
            cout<<"* ";
        cout<<endl;
    }  
    return 0;
}

// Output -->
// Enter row: 8
//        * 
//       * * 
//      * * * 
//     * * * * 
//    * * * * * 
//   * * * * * * 
//  * * * * * * * 
// * * * * * * * * 