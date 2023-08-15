#include <iostream>
using namespace std;
                   
int main()
{
    int row,col = 0;
    int i,j = 0;

    cout<<"Enter row: ";
    cin>>row;  

    for(i = 1; i < row+1; i++){
        for(j = 0; j < i; j++)
            cout<<" ";
        for(j = row-i+1; j > 0; j--)
            cout<<"* ";
        cout<<endl;
    }  
    return 0;
}

// Output -->
// Enter row: 8
//  * * * * * * * * 
//   * * * * * * * 
//    * * * * * * 
//     * * * * * 
//      * * * * 
//       * * * 
//        * * 
//         * 