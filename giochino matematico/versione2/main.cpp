//francesco conforto//
#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include<windows.h>
#include<ctime>
#include<mmsystem.h>
using namespace std;
int numero_tentativi;
int scelta;
int tentativi;
int numero;
int num_casuale;
int record=10000;
string risposta;
string risposta2;
int main()
{cout<<"OBBIETTIVO: trova il numero!(e' compreso fra 1 e 100)"<<endl;
u: cout<<"digita la difficolta' 1=facile(10 tentativi) 2=medio(7 tentativi) 3=difficile(5 tentativi)"<<endl;
cin>>scelta;
inizio:
srand((unsigned)time(NULL)); 
num_casuale= rand() % 100; 
tentativi=0;
switch(scelta)
{case 1:
		do {
        cout<<"digita numero"<<endl;
		cin>>numero;
		tentativi=tentativi+1;
		numero_tentativi=10;
		if(numero>100)
		{cout<<"ERRORE"<<endl;
		return 0;}
		else if(numero>num_casuale)
		{cout<<"il numero da trovare e' minore di "<<numero<<endl;}
		else if(numero<num_casuale)
		{cout<<"il numero da trovare e' maggiore di "<<numero<<endl;}
		else
		{cout<<"hai vinto ed hai usato "<<tentativi<<" tentativi"<<endl;
		sndPlaySound(TEXT("applausi.wav"),NULL);
		goto x;}
		}
		while(tentativi<numero_tentativi);
		cout<<"hai esaurito i tentativi, il numero da trovare era "<<num_casuale<<endl;
		sndPlaySound(TEXT("fail.wav"),NULL);
		goto y;
case 2:
		do {
		cout<<"digita numero"<<endl;
		cin>>numero;
		tentativi=tentativi+1;
		numero_tentativi=7;
		if(numero>100)
		{cout<<"ERRORE"<<endl;
		return 0;}
		else if(numero>num_casuale)
		{cout<<"il numero da trovare e' minore di "<<numero<<endl;}
		else if(numero<num_casuale)
		{cout<<"il numero da trovare e' maggiore di "<<numero<<endl;}
		else
		{cout<<"hai vinto ed hai usato "<<tentativi<<" tentativi"<<endl;
		sndPlaySound(TEXT("applausi.wav"),NULL);
		goto x;}
		}
		while(tentativi<numero_tentativi);
		cout<<"hai esaurito i tentativi, il numero da trovare era "<<num_casuale<<endl;
		sndPlaySound(TEXT("fail.wav"),NULL);
		goto y;
case 3:
		do {
		cout<<"digita numero"<<endl;
		cin>>numero;
		tentativi=tentativi+1;
		numero_tentativi=5;
		if(numero>100)
		{cout<<"ERRORE"<<endl;
		return 0;}
		else if(numero>num_casuale)
		{cout<<"il numero da trovare e' minore di "<<numero<<endl;}
		else if(numero<num_casuale)
		{cout<<"il numero da trovare e' maggiore di "<<numero<<endl;}
		else
		{cout<<"hai vinto ed hai usato "<<tentativi<<" tentativi"<<endl;
		sndPlaySound(TEXT("applausi.wav"),NULL);
		goto x;}
		}
		while(tentativi<numero_tentativi);
		cout<<"hai esaurito i tentativi, il numero da trovare era "<<num_casuale<<endl;
		sndPlaySound(TEXT("fail.wav"),NULL);
		goto y;
default:
	cout<<"ERRORE"<<endl;
	return 0;
	}
x: if(tentativi<record)
{record=tentativi;
cout<<"Complimenti hai battuto il record, adesso il tuo record e' di "<<tentativi<<" tentativi"<<endl;
sndPlaySound(TEXT("tada.wav"),NULL);}
else
{cout<<"Non sei riuscito a battere il record"<<endl;}
y: cout<<"Vuoi rigiocare?"<<endl;
cin>>risposta;
if(risposta=="si")
{cout<<"vuoi rigiocare con lo stesso livello"<<endl;
cin>>risposta2;
if(risposta2=="si")
{goto inizio;}
else
{goto u;}}
else{system("pause");}}


