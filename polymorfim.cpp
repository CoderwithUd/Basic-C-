/*#include<iostream>
using namespace std;

class a{
	public:
	void show()
	{
		cout<<"Hello World."<<endl;
	}
};
class b :public a{
	public:
	void show()
	{
		cout<<"Uday Dewangan"<<endl;
	}
};

int main()
{
	a o;
	o.show();
	return 0;
}


// function overridding can be achive by the inhertance .
//function overloding cab be done by the same funtion.

//fOri is a expale of run time polytmorfime example .
/// fodi cna be done bty the complie time pklo  example .


*/
// Example: defining the constructor within the class

#include<iostream>
using namespace std;
class student
{
	int rno;
	string name;
	double fee;
	public:
	/*student()
	{
		cout<<"Enter the RollNo:";
		cin>>rno;
		cout<<"Enter the Name:";
		cin>>name;
		cout<<"Enter the Fee:";
		cin>>fee;
	}*/
	student( string s,int n)
	{
		rno=n;
		name=s;
	}


	void display()
	{
		cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
	}
};

int main()
{
	student s("uday",59); //constructor gets called automatically when we create the object of the class
	s.display();
	return 0;

}

classsmartphone{ //Data Members(Properties) stringmodel; intyear_of_manufacture; bool_5g_supported; public: //default constructor smartphone(){ model ="unknown";