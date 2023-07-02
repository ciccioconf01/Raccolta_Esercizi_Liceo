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
int record1=10000;
int record2=10000;
int record3=10000;
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
		
        a:cout<<"digita numero"<<endl;
		cin>>numero;
		tentativi=tentativi+1;
		numero_tentativi=10;
		if(numero>100)
		{cout<<"ERRORE"<<endl;
		goto g;}
		else if(numero>num_casuale)
		{cout<<"il numero da trovare e' minore di "<<numero<<endl;}
		else if(numero<num_casuale)
		{cout<<"il numero da trovare e' maggiore di "<<numero<<endl;}
		else
		{cout<<"hai vinto ed hai usato "<<tentativi<<" tentativi"<<endl;
		sndPlaySound(TEXT("applausi.wav"),NULL);
		if(tentativi<record1)
		{record1=tentativi;
		cout<<"Complimenti hai battuto il record, adesso il tuo record e' di "<<record1<<" tentativi"<<endl;
		sndPlaySound(TEXT("tada.wav"),NULL);
		tentativi=0;
		g: cout<<"vuoi rigiocare?"<<endl;
		cin>>risposta;
		if(risposta=="si")
		{cout<<"vuoi rigiocare con lo stesso livello?"<<endl;
		cin>>risposta;
		if(risposta=="si")
		{goto inizio;}
		else
		{goto u;}}
		else
		{return 0;}}
		else
		{cout<<"non sei riuscito a battere il record e quindi resta di "<<record1<<" tentativi"<<endl;
		tentativi=0;
		z: cout<<"vuoi rigiocare?"<<endl;
		cin>>risposta;
		if(risposta=="si")
		{cout<<"vuoi rigiocare con lo stesso livello?"<<endl;
		cin>>risposta;
		if(risposta=="si")
		{goto inizio;}
		else
		{goto u;}}
		else
		{return 0;}}}
		if(tentativi<numero_tentativi)
		{goto a;}
		else
		{cout<<"hai esaurito i tentativi, il numero da trovare era "<<num_casuale<<endl;
		sndPlaySound(TEXT("fail.wav"),NULL);
		goto z;
		}
		
case 2:
 b:cout<<"digita numero"<<endl;
		cin>>numero;
		tentativi=tentativi+1;
		numero_tentativi=7;
		if(numero>100)
		{cout<<"ERRORE"<<endl;
		goto g;}
		else if(numero>num_casuale)
		{cout<<"il numero da trovare e' minore di "<<numero<<endl;}
		else if(numero<num_casuale)
		{cout<<"il numero da trovare e' maggiore di "<<numero<<endl;}
		else
		{cout<<"hai vinto ed hai usato "<<tentativi<<" tentativi"<<endl;
		sndPlaySound(TEXT("applausi.wav"),NULL);
		if(tentativi<record2)
		{record2=tentativi;
		cout<<"Complimenti hai battuto il record, adesso il tuo record in questo livello e' di "<<record2<<" tentativi"<<endl;
		sndPlaySound(TEXT("tada.wav"),NULL);
		tentativi=0;
		cout<<"vuoi rigiocare?"<<endl;
		cin>>risposta;
		if(risposta=="si")
		{cout<<"vuoi rigiocare con lo stesso livello?"<<endl;
		cin>>risposta;
		if(risposta=="si")
		{goto inizio;}
		else
		{goto u;}}
		else
		{return 0;}}
		else
		{cout<<"non sei riuscito a battere il record e quindi resta di "<<record2<<" tentativi"<<endl;
		tentativi=0;
		x: cout<<"vuoi rigiocare?"<<endl;
		cin>>risposta;
		if(risposta=="si")
		{cout<<"vuoi rigiocare con lo stesso livello?"<<endl;
		cin>>risposta;
		if(risposta=="si")
		{goto inizio;}
		else
		{goto u;}}
		else
		{return 0;}}}
		if(tentativi<numero_tentativi)
		{goto b;}
		else
		{cout<<"hai esaurito i tentativi, il numero da trovare era "<<num_casuale<<endl;
		sndPlaySound(TEXT("fail.wav"),NULL);
		goto x;
		}
		
case 3:
 c:cout<<"digita numero"<<endl;
		cin>>numero;
		tentativi=tentativi+1;
		numero_tentativi=5;
		if(numero>100)
		{cout<<"ERRORE"<<endl;
		goto g;}
		else if(numero>num_casuale)
		{cout<<"il numero da trovare e' minore di "<<numero<<endl;}
		else if(numero<num_casuale)
		{cout<<"il numero da trovare e' maggiore di "<<numero<<endl;}
		else
		{cout<<"hai vinto ed hai usato "<<tentativi<<" tentativi"<<endl;
		sndPlaySound(TEXT("applausi.wav"),NULL);
		if(tentativi<record3)
		{record3=tentativi;
		cout<<"Complimenti hai battuto il record, adesso il tuo record e' di "<<record3<<" tentativi"<<endl;
		sndPlaySound(TEXT("tada.wav"),NULL);
		tentativi=0;
		cout<<"vuoi rigiocare?"<<endl;
		cin>>risposta;
		if(risposta=="si")
		{cout<<"vuoi rigiocare con lo stesso livello?"<<endl;
		cin>>risposta;
		if(risposta=="si")
		{goto inizio;}
		else
		{goto u;}}
		else
		{return 0;}}
		else
		{cout<<"non sei riuscito a battere il record e quindi resta di "<<record3<<" tentativi"<<endl;
		tentativi=0;
		y: cout<<"vuoi rigiocare?"<<endl;
		cin>>risposta;
		if(risposta=="si")
		{cout<<"vuoi rigiocare con lo stesso livello?"<<endl;
		cin>>risposta;
		if(risposta=="si")
		{goto inizio;}
		else
		{goto u;}}
		else
		{return 0;}}}
		if(tentativi<numero_tentativi)
		{goto c;}
		else
		{cout<<"hai esaurito i tentativi, il numero da trovare era "<<num_casuale<<endl;
		sndPlaySound(TEXT("fail.wav"),NULL);
		goto y;
		}
default:
	cout<<"ERRORE"<<endl;
	goto g;
	}
	system("pause");}



