//francesco conforto//
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
string nome;
string cognome;
int anzianita;
int stipendio;
int massimo;
int massimo2;
string z;
string y;
string x;
string a;
string risposta;
int main()
{;do{
cout<<"digita nome"<<endl;
cin>>nome;
cout<<"digita cognome"<<endl;
cin>>cognome;
cout<<"digita l'eta'"<<endl;
cin>>anzianita;
cout<<"digita stipendio"<<endl;
cin>>stipendio;
if(anzianita>massimo)
{z=nome;
a=cognome;}
if(stipendio>massimo2)
{massimo2=stipendio;
x=nome;
y=cognome;}
cout<<"elenco finito?"<<endl;
cin>>risposta;}while(risposta=="no");
cout<<x<<y<<" ha lo stipendio piu' alto con "<<massimo2<<" euro al mese"<<endl;
cout<<"il dipendente piu' anziano e' "<<z<<a<<endl;
system("pause");}

