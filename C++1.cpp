/* Write a program by creating an &#39;Employee&#39; class having the following functions and print the
final salary.
1 - getInfo()&#39; which takes the salary, number of hours of work per day of employee as
parameters
2 - AddSal()&#39; which adds $10 to the salary of the employee if it is less than $500.
3 - AddWork()&#39; which adds $5 to the salary of the employee if the number of hours of work per
day is more than 6 hours. */

#include<iostream>
using namespace std;


class Employee // here we create a class employee that contain salary and no of hours
{
	double salary;
	int no_of_hours;
public:
	Employee() {}
	void getinfo()
	{
		cout << "Please, enter the salary of employee: ";
		cin >> salary;
		cout << "Please, enter the number of hours: ";
		cin >> no_of_hours;
	}
	void AddSal()
	{
		if (salary < 500)
			salary += 10;
	}
	void AddWork()
	{
		if (no_of_hours > 6)
			salary += 5;
	}
	void DisplaySalary()
	{
		cout << salary;
	}


};


int main() // here our main program start
{
	int num;
	cout << "Enter the number of employees: ";
	cin >> num;
	Employee* emp=new Employee[num];
	for (int i = 0; i < num; i++)
	{
		emp[i].getinfo();
		emp[i].AddSal();
		emp[i].AddWork();
	}
	for (int i = 0; i < num; i++)
	{
		cout << "\nThe final salary of employee "<<i<<" is:";
		emp[i].DisplaySalary();
	}
}
