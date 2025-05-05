#include<iostream>
#include<vector>
#include<string>
using namespace std;


class Task {
		string description;
		bool isCompleted;

	public:
		Task(string desc) {
			description = desc;
			isCompleted = false;
		}
		string getDescription() const {
			return description;
		}

		bool getStatus() const {
			return isCompleted;
		}
		void markCompleted() {
			isCompleted = true;
		}

};

class ToDoList {
		vector<Task> tasks;
	public:
		void addTask() {
			string desc;
			cout<<"Enter a task desc:"<<endl;
			cin.ignore();
			getline(cin,desc);
			Task newTask(desc);
			tasks.push_back(newTask);
			cout<<"Task added successfully!!!"<<endl;
		}

		void viewTasks() const {
			if(tasks.empty()) {
				cout<<"Your to-do list is empty!!!"<<endl;
				return;
			}
			cout<<"Your Tasks:"<<endl;


			for(size_t i = 0; i<tasks.size(); ++i) {

				cout<<i+1<<" ["<<(tasks[i].getStatus() ?  "Ticked":"Non-Ticked")<<"] "<<tasks[i].getDescription()<<endl;

			}



		}

		void markTaskCompleted() {
			int num;
			cout<<"Enter task number to mark as completed:";
			cin>>num;


			if(num>=1 and num<= (int)tasks.size() ) {
				tasks[num-1].markCompleted();
				cout<<"Task marked as completed!!!"<<endl;

			} else {
				cout<<"Invalid task  number!!!"<<endl;

			}



		}

		void removeTask() {
			int num;
			cout<<"Enter task number to remove: "<<endl;
			cin>>num;

			if(num>=1 and num<=(int)tasks.size()) {
				tasks.erase(tasks.begin()+num-1);
				cout<<"Task removed successfully!!!"<<endl;

			}

			else {
				cout<<"Invalid task number!!!"<<endl;
			}
		}



};
void showMenu() {
	cout<<"--------Welcome to ToDoList App---------"<<endl;
	cout<<"1. Add Task"<<endl;
	cout<<"2. View Task"<<endl;
	cout<<"3. Mark Task As Completed!"<<endl;
	cout<<"4. Remove Task"<<endl;
	cout<<"5. Exit Task App"<<endl;
	cout<<"Enter your choice:"<<endl;


}


int main() {
	ToDoList todo;
	int choice;
	while(true) {
		showMenu();
		cin>>choice;
		switch(choice) {
			case 1:
				todo.addTask();
				break;
			case 2:
				todo.viewTasks();
				break;
			case 3:
				todo.markTaskCompleted();
				break;
			case 4:
				todo.removeTask();
				break;
			case 5:
				cout<<"Good Bye!!!"<<endl;
				return 0;
				break;
			default:
				cout<<"Invalid choice please try again!!!"<<endl;

		}
	}


	return 0;
}

