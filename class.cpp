#include<iostream>
using namespace std;
class student
{
	protected:
		char name[20];
		int rollno, age;
		void detail()
		{
			cout<<"Enter your detail ";
			cin>>name>>rollno>>age;
			cout<<"The detail of "<< name <<" is: "<<endl;		
			cout<<name<<endl<<rollno<<endl<<age;
		}
		
};
int main()
{
	student std;
	std.detail();
	return 0;
}
