#include<iostream>
using namespace std;
class Addition{
	private:
		int num1, num2;
		public:
			void add_num()
			{
				cout<<" Enter the num1 & num 2";
				cin>>num1  >>num2;
				cout<<"The detail of the given number is " << num1 <<" & " << num2 << " is " << num1 + num2;
			}
			
};
int main()
{
	Addition add;
	add.add_num();
	return 0;
}
