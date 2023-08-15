#include <iostream>
#include "assert.h"
using namespace std;
                   
int main()
{
    int n;
    cout<<"Enter no of lines: ";
    cin>>n;
    int i,j,k;
    assert(n <= 9);
    
    for(i = 0; i < n; i++){
        int start = 8 - i;
        int count = i + 1;
        for(j = 0; j <= 16; j++){
            if(j == start && count > 0){
                cout<<i+1;
                start += 2;
                count--;     
            }
            else   
                cout<<"*";
        }
        cout<<endl;
    } 
    return 0;
}

// output -->
// Enter no of lines: 9
// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****
// ***6*6*6*6*6*6***
// **7*7*7*7*7*7*7**
// *8*8*8*8*8*8*8*8*
// 9*9*9*9*9*9*9*9*9