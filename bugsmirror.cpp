#include<iostream>
#include<string>
using namespace std;
int main()
{
string name,date,time,ans;
int product;
char product_name[product];
int id,item[product];
float price[product],tax,total;
float amt=0;
cout<<"\n\t**************************************************\n";
cout<<"\t\t:B i l l:\n";
cout<<"\t**************************************************\n";
cout<<":Enter Date: ";
getline(cin,date);
cout<<":Enter Time: ";
getline(cin,time);
cout<<":Enter Coustomer Name: ";
getline(cin,name);
cout<<"Enter Coustomer Moblie Nmuber:" ;
cin>>id;
cout<<"Enter the Differentt Product :" ;
cin>>product;
for(int i=1;i<=product;i++){
    cout<<"Product Name"<<i<<":";
    cin>>product_name[i];
    cout<<"Enter the item quanties "<<i<<":\n" ;
cin>>item[i];
cout<<"Enter the Price of item"<<i<<":\n" ;
cin>>price[i];
}
for(int i=1;i<=product;i++){
if((item[i]>=0 && item[i]<=100)&&(price[i]>0))
{
amt+=item[i]*price[i];
}
}


//calculate tax
tax=(amt*10)/100;
total=amt+50+tax;
cout<<"Date: "<<date<<endl;
cout<<"Time: "<<time<<endl;

cout<<"Coustomer Name: "<<name<<endl;
cout<<"\n\nCoustomer moblie Number: "<<id<<endl;
cout<<"Unit Consumed by Customer: "<<item<<endl;
for(int i=1;i<=product;i++)
{
    cout<<" Name of Product"<<product_name[i]<<" "<<"Itme quanties :"<<item[i]<<" "<<"Price of Product:"<<price[i]<<" ";
}


cout<<"Bill of Units without tax is: "<<amt<<" Rs."<<endl;
cout<<"Tax is: "<<tax<<endl;
cout<<"Total Bill Pay by Customer: "<<total<<endl;
cout<<"Please enter Yes /No for New bill";
cin>>ans;
return 0;
}