#include<iostream>
using namespace std;

int main(){
    int n = 5;
    
    for(int i = 5; i>=1; i--){
        for(int j = 1; j<i; j++){
            cout<<"  ";
        }
        for(int k = i; k<=n; k++){
            cout<<k<<" "; 
        }
        cout<<endl;
    }
}