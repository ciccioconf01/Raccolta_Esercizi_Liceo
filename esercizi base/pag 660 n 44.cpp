//conforto francesco paolo//
#include<iostream>
#include<cstdlib>
using namespace std;
int ngiorni;
int piano;
int prezzo;
int main()
{cout<<"digita numero di giorni di soggiorno"<<endl;
cin>>ngiorni;
cout<<"digita il piano della camera (1,2,3,4)"<<endl;
cin>>piano;
switch(piano)
{case 1:
	prezzo=65*ngiorni;
	break;
case 2:
	prezzo=75*ngiorni;
	break;
case 3:
	prezzo=80*ngiorni;
	break;
case 4:
	prezzo=85*ngiorni;
	break;
default:
	cout<<"errore"<<endl;
	break;
}
cout<<"il prezzo e'"<<prezzo<<endl;
system("pause");
}
