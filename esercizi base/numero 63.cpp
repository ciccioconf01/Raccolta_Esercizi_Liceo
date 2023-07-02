//francesco conforto//
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int giorni;
int npersone;
string veicolo;
string alloggio;
int prezzo;
string risposta;
int accumulatoreprezzo;
int main()
{;do{
cout<<"digita il numero di giorni trascorsi nel campeggio"<<endl;
cin>>giorni;
cout<<"digita numero di persone "<<endl;
cin>>npersone;
cout<<"digita il tipo di alloggio ( t=tenda o r=roulotte)"<<endl;
cin>>alloggio;
cout<<"digita il tipo di veicolo (a=auto o m=moto)"<<endl;
cin>>veicolo;
if(alloggio=="t" and veicolo=="a")
{prezzo=npersone*15+17*giorni+6*giorni;}
else if(alloggio=="t"and veicolo=="m")
{prezzo=npersone*15+17*giorni+4*giorni;}
else if(alloggio=="r" and veicolo=="a")
{prezzo=npersone*15+20*giorni+6*giorni;}
else
{prezzo=npersone*15+20*giorni+4*giorni;}
cout<<"il prezzo e' di "<<prezzo<<" euro"<<endl;
accumulatoreprezzo=accumulatoreprezzo+prezzo;
cout<<"elenco famiglie finito?"<<endl;
cin>>risposta;}while(risposta=="no");
cout<<"l'incasso del campeggio in questa giornata e' stato di "<<accumulatoreprezzo<<" euro"<<endl;
system("pause");
}

