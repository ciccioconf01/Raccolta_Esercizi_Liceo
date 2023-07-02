//francesco conforto//
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
float abitanti;
float ab_attivi;
float indice_attivita;
string citta;
float minimo=10000;
float massimo;
string risposta;
string y;
string x;
int main()
{;do{
cout<<"digita la citta'"<<endl;
cin>>citta;
cout<<"digita il numero di abitanti"<<endl;
cin>>abitanti;
cout<<"digita il numero di abitanti attivi"<<endl;
cin>>ab_attivi;
indice_attivita=ab_attivi/abitanti*100;
if(indice_attivita>massimo)
{massimo=indice_attivita;
x=citta;}
else if(indice_attivita<minimo)
{minimo=indice_attivita;
y=citta;}
cout<<"elenco finito?"<<endl;
cin>>risposta;}while(risposta=="no");
cout<<y<<" ha l'indice di attivita' piu' basso con un risultato di "<<minimo<<endl;
cout<<x<<" ha l'indice di attivita' piu' alto con un risultato di "<<massimo<<endl;
system("pause");
}

