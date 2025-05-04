#include<iostream>
using namespace std;

int main(){
char b[9]={'1','2','3','4','5','6','7','8','9'};
char p = 'X';
int m;


for (int i = 0; i < 9; i++)
{
    cout<<endl<<b[0]<<" | "<<b[1]<<" | "<<b[2]<<endl;
    cout<<"--+--+--"<<endl;
    cout<<endl<<b[3]<<" | "<<b[4]<<" | "<<b[5]<<endl;
    cout<<"--+--+--"<<endl;
    cout<<endl<<b[6]<<" | "<<b[7]<<" | "<<b[8]<<endl;

    cout<<endl<<"Player "<<p<<" , enter (1 - 9 ):";
    cin>>m;
    m--;
    if (b[m]=='X'||b[m]=='O')
    {
        cout<<"It's taken Please Try again."<<endl;i--;continue;
    }
     b[m]=p;
     if ((b[0]==p&&b[1]==p&&b[2]==p)||(b[3]==p&&b[4]==p&&b[5]==p)||(b[6]==p&&b[7]==p&&b[8]==p)||
     (b[0]==p&&b[3]==p&&b[6]==p)||(b[1]==p&&b[4]==p&&b[7]==p)||(b[2]==p&&b[5]==p&&b[8]==p)
    ||(b[0]==p&&b[4]==p&&b[8]==p)||(b[2]==p&&b[4]==p&&b[6]==p))
     {
        cout<<"\nPlayer "<<p<<" wins!!!"<<endl;break;

     }

     p = (p=='X')? 'O':'X';
     if (i==8)
     {
        cout << "\nIt's a draw!!!" << endl;
        
     }
     
        
    


}

    return 0;
}