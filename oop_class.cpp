/*#include<iostream>
using namespace std;

//base classs
class car
{
	public:
	int length;
	string color;
   private:
	void name_car()
	{
		cout << "Name of cars:"<<endl;
	}
};

//derived class
class bmw :public car{
    public : 
	string name;

	void show()
	{
		cin >> name ;
		cout<<name <<endl;
	}


};

int main()
{
	 bmw obj;
	 obj.name_car();
	 obj.show();
	
	 return 0;
 
}
	

class a{
	public:
	int a=10;
	void print()
	{
		cout<<a<<endl;
	}
};
class b:public a{
	public:
	int b=10;
	void ba()
	{
		cout<<b<<endl;
	}
};

class c :public b{
	public:
	int c=10;
	void cv()
	{
		cout<<c<<endl;
	}
};

int main()
{
	c obj;
	obj.ba();
	obj.cv();
	obj.a;
	return 0;

}*/



#include<iostream>
#include<stdio.h>
using namespace std;
class student{
	private:
	string name;
	protected:
	int Id;
	public:
	student(string n)
	{
		cout<<"Name of any; "<<n<<endl;
	}
	void name_s(string name){
		cout<<"student Name :"<<name<<endl;
	}
	int student_Id(int id)
	{
		cout<<"Student Id:"<<id<<endl;
	}
};
int main()
{
	student s;
	s.name_s("Uday dewangan");
	s.student_Id(1234);
	int x=printf("\nUday %d",printf("Dewangan"));
	//int y=cout<<"Uday dewangan"+2<<endl;
	cout<<x<<endl;
	return 0;

}


