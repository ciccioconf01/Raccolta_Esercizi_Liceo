//francesco conforto//
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
const int lvet=100;
int num;
int scelta;
int num_esterno;
bool trovato;
string risposta;
int i;
int x;
int numeri[lvet];
int main()
{cout<<"digita quanti numeri inserire"<<endl;
cin>>num;
for(i=1;i<=num;i++)
{	cout<<"digita il numero"<<endl;
	cin>>numeri[i];
}
j:
cout<<"digita 1 per ricercare un numero; digita 2 per visualizzare tutti gli elementi"<<endl;
cin>>scelta;
switch(scelta)
{	case 1:


	
	cout<<"digita il numero da ricercare"<<endl;
	cin>>num_esterno;
	for(i=1;i<=num;i++)
	{	if(numeri[i]==num_esterno)
		{trovato=true;
		x=i;
		}
	}
	if(trovato==true)
	{cout<<"il numero e' stato trovato e si trova nella posizione "<<x<<endl;
	
	}
	else
	{cout<<"l'elemento non e' stato trovato"<<endl;
	}
	cout<<"Vuoi ritornare sul menu' di scelta?"<<endl;
	cin>>risposta;
	if(risposta=="si")
	{goto j;}
	break;
	
	case 2:
		for(i=1;i<=num;i++)
		{cout<<numeri[i]<<endl;
		}
		cout<<"Vuoi ritornare sul menu' di scelta?"<<endl;
	cin>>risposta;
	if(risposta=="si")
	{goto j;}
	break;
	
	default:
		cout<<"errore"<<endl;
		cout<<"Vuoi ritornare sul menu' di scelta?"<<endl;
	cin>>risposta;
	if(risposta=="si")
	{goto j;}
	break;	
}
system("pause");
}
