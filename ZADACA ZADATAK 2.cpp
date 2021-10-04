#include<iostream>
using namespace std;
int main()
{
	int g_rodjenja; // godina rodjenja
	int m_rodjenja; // mjesec rodjenja
	int godina= 2021; // trenutna godina
	int mjesec= 9; // trenutni mjesec
	
	cout<<"Unesite vasu godinu i mjesec rodjenja:"<<endl;
	cin>>g_rodjenja>>m_rodjenja;
	
	if (m_rodjenja==10)
	{
		cout<<"Imate "<<godina-g_rodjenja-1<<" godina i "<<mjesec+1<<" mjeseci!"<<endl;
    }
	
	else if (m_rodjenja==11)
	{
		cout<<"Imate "<<godina-g_rodjenja-1<<" godina i "<<mjesec+2<<" mjeseci!"<<endl;
    }
	
	else if (m_rodjenja==12)
	{
		cout<<"Imate "<<godina-g_rodjenja-1<<" godina i "<<mjesec+3<<" mjeseci!"<<endl;
    }
	
		else
	{
	cout<<"Imate "<<godina-g_rodjenja<<" godina i "<<mjesec-m_rodjenja<<" mjeseci!"<<endl;
    }

}
