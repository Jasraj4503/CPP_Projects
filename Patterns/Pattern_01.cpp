#include<iostream>
using namespace std;

int main(){
    int n = 40;

    for(int i = 1; i<=5; i++){
        for(int j = 1; j<=i; j++ ){
            cout<<n+j<<" ";
        }
        cout<<endl;
    }
}