#include<iostream>
using namespace std;
int area( int r)
{
    int area ;
    area = 3.14*r*r;
    return area;

}
int main()
{
    int R;
    float Circle;
    cin>>R;
    Circle=area(R);
    cout<<Circle;
    return 0;

}