#include<iostream>
using namespace std;

int main() {
	char op;
	int num1,num2;
	cout<<"Enter a num1:";
	cin>>num1;
	cout<<"Enter a Operator:";
	cin>>op;
	cout<<"Enter a num2:";
	cin>>num2;
	switch(op){
		case '+':
			cout<<"Result:"<<num1+num2<<endl;
			break;
		case '-':
			cout<<"Result:"<<num1-num2<<endl;
			break;
		case '*':
			cout<<"Result:"<<num1*num2<<endl;
			break;
		case '/':
			if(num2==0) {
				cout<<"Error: You can't divide a number by 0"<<endl;
				break;
			} else {
				cout<<"Result:"<<num1/num2<<endl;
				break;
			}
			default:
				cout<<"You Entered a Invalid operator , Please try again!"<<endl;
	}


	return 0;
}

