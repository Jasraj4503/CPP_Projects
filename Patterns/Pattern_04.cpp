//         5
//       4 5 4
//     3 4 5 4 3
//   3 3 4 5 4 3 2  
// 1 2 3 4 5 4 3 2 1


#include<iostream>
using namespace std;

int main(){
    int rows = 5;
    for(int i=1; i<=rows; i++){
        for(int s=1; s<=(rows-i); s++){
            cout<<"  ";
        }

        int start;
        if(i<rows){
            start = rows - i + 1;
        }
        else{
            start = 1; 
        }

        for(int j = start; j <= rows; j++){
            cout<<j<<" ";
        }

        for(int j = rows - 1; j >= start; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}