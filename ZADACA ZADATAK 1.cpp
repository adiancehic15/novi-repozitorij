#include<iostream>
using namespace std;
int main()
{
int mjesec;
cout<<" Unesite broj mjeseca: "<<endl;
cin>>mjesec;

if (mjesec == 12)
{
	cout<<"21. decembra zavrsava jesen i pocinje zima."<<endl;
}

else if (mjesec == 9)
{
	cout<<"23. septembra zavrsava ljeto, a pocinje jesen."<<endl;
}

else if (mjesec == 6)
{
	cout<<"21. juna zavrsava proljece, a pocinje ljeto."<<endl;
}

else if (mjesec == 3)
{
	cout<<"21. marta zavrsava zima i pocinje proljece."<<endl;
}
else if (mjesec == 10 || mjesec == 11)
{
	cout<<"Godisnje doba kojem vas mjesec pripada je jesen!"<<endl;
}

else if (mjesec == 7 || mjesec == 8)
{
cout<<"Godisnje doba kojem vas mjesec pripada je ljeto!"<<endl;	
}

else if (mjesec == 4 || mjesec == 5)
{
cout<<"Godisnje doba kojem vas mjesec pripada je proljece!"<<endl;	
}

else if (mjesec == 1 || mjesec == 2)
{
cout<<"Godisnje doba kojem vas mjesec pripada je zima!"<<endl;	
}

else if (mjesec>12)
{
	cout<<"POGRESAN UNOS, MOLIMO PONOVITE!!"<<endl;
}

return 0;
}
