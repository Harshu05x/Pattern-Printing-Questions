#include <iostream>
using namespace std;
                   
int main()
{
    int row = 0;
    int i,j = 0;
    cout<<"Enter row: ";
    cin>>row;
    
    for(i = 0; i < row; i++){
        for(j = 0; j < row - i; j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    
    for(i = 0; i < row; i++){
        for(j = row - i; j > 0; j--){
            cout<<row-i-j+1<<" ";
        }
        cout<<endl;
    }
    return 0;

}

// Output -->
// Enter row: 8
// 1 2 3 4 5 6 7 8 
// 1 2 3 4 5 6 7 
// 1 2 3 4 5 6 
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 