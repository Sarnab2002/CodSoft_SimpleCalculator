#include<iostream>
using namespace std;
int main(){
    char op;
    float num1,num2;
    cout<<"Enter oparator of your choice:+,-,*,/:";
    cin>>op;
    cout<<"Enter two operands:"<<endl;
    cin>>num1>>num2;
    switch(op){
        case '+':
        cout<<num1+num2;
        break;
        case'-':
        cout<<num1-num2;
        break;
        case '*':
        cout<<num1*num2;
        break;
        case '/':
        cout<<num1/num2;
        break;
        default:
        cout<<"Error!operator is incorrect";
        break;
    }
    return 0;
}