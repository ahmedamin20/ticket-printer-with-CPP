#include <iostream>
#include <cstring>
#include <windows.h>
#define SCREEN_WIDTH 90
#define SCREEN_HEIGHT 26
#define WIN_WIDTH 70
using namespace std;
void issue_tiket(int flight_no , string pname);
int main()
{
	string name;
	issue_tiket(145 , name);
	Sleep(5000);
	system("pause");
	system("mode 650");
}
void issue_tiket(int flight_no , string pname)
{
	static int ticket=0;
	while (ticket<=99)
	{ 
	cout<<"Enter the name writen in the passport.\n";
	cin>>pname;
	cout<<"________________________________________________________________________________\n\n";
	cout<<"Dear "<<pname<<" your code is 0021 ************************* \n\n\n";
	cout<<"flight no:"<<flight_no<<"\n\n\n";
	cout<<"ticket no:"<<++ticket<<"\n\n\n";
	cout<<"issue for:"<<pname<<"\n\n\n";
	cout<<"We wish you safe comfortable traveling :-)\n\n\n";
	cout<<"________________________________________________________________________________\n\n\n";
	cout<<"____________________________________\n";
	cout<<"\nthe remaining tickets are  "<<100-ticket<<"\n";
	cout<<"____________________________________\n\n\n";
    }
    cout<<"please wait for the next flight";
}

