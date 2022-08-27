#include<iostream>
using namespace std;
class employee
{
	public:
		employee()
		{
			cout<<"default constructor invoked"<<endl;
		}
};
int main(void)
{
	employee e1;//creating an object of employee
	employee e2;
	return 0;
}
