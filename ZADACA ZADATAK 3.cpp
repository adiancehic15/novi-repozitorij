#include<iostream>
using namespace std;
int main()
{
int x; 
cout<<"Unesite broj: "<<endl;
cin>>x;

 if (x %3==0 && x %5==0)
{
	cout<<"Broj je djeljiv i sa 3 i sa 5."<<endl;
}
 else if (x%3==0)
 {
 	cout<<"Broj je djeljiv samo sa 3!"<<endl;
 }
 else if (x%5==0)
{
	cout<<"Broj je djeljiv samo sa 5!"<<endl;
}
else 
cout<<"Broj nije djeljiv ni sa 3 ni sa 5."<<endl;

 return 0;
}
