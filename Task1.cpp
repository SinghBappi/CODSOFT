#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main() {
	srand(time(0));
	int secretno = rand() % 100 + 1;
	int guess;
	cout<<"Please guess number between number 1 to 100 :"<<endl;
	do{
		cout<<"Enter a Number:";
		cin>>guess;


		if(guess>secretno) {
			cout<<"It's too high , Please try again!!!"<<endl;

		} else if(guess<secretno) {
			cout<<"It's too low , Please try again!!!"<<endl;

		}

		else {
			cout<<"Correct you guess!"<<endl;

		}
	}
		while(guess!=secretno);

	return 0;
}

