#include<iostream>
using namespace std;

int main(){
    int score;
    char grade;
    
    cout<<"Enter your score : ";
    cin>>score;

    grade = (score >= 90 && score <= 100) ? 'A' : 
            (score >= 80 && score <= 89) ? 'B' :
            (score >= 70 && score <= 79) ? 'C' :
            (score >= 60 && score <= 69) ? 'D' :
            (score >= 50 && score <= 59) ? 'E' : 'F';
    
    cout<<"Your grade is "<<grade;
    switch(grade){
        case 'A':
            cout<<" Excellent Work!";
            break;
        case 'B':
            cout<<" Well done.";
            break;
        case 'C':
            cout<<" Good job";
            break;
        case 'D':
            cout<<" You Passed, but you could do better";
            break;
        case 'F':
            cout<<" Sorry, you failed.";
            break;
        default: 
            cout<<" Your grade is not in the list.";
    }
    
    if(grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D'){
        cout<<" Congratulations! You are eligible for next level";
    }
    else{
        cout<<" Please try again next time";
    }
}
