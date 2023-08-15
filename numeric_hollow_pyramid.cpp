#include <iostream>
using namespace std;
                   
int main()
{
    int n,i,j;
    cout<<"Enter no of lines: ";
    cin>>n;

    for(i = 0; i < n; i++){
        for(j = n-i-1; j > 0; j--)
            cout<<" ";
        int x = 1;
        for(j = 0; j < 2*i+1; j++){
            if(i == 0 || i == n-1){
                if(j % 2 == 0){
                    cout<<x;
                    x++;
                }
                else 
                    cout<<" ";
            }
            else{
                if(j == 0)
                    cout<<1;
                else if(j == 2*i)
                    cout<<i+1;
                else
                    cout<<" ";
            }
        }
        cout<<endl;
    }  
    return 0;
}

// output-->
// Enter no of lines: 9
//         1
//        1 2
//       1   3
//      1     4
//     1       5
//    1         6
//   1           7
//  1             8
// 1 2 3 4 5 6 7 8 9