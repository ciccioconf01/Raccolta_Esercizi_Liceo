//francesco conforto//
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int anno_corrente;
string nome;
int anno_nascita;
int eta;
string risposta;
int contapensionabili;
int contaminorenni;
int main()
{cout<<"digita anno corrente"<<endl;
cin>>anno_corrente;
do{cout<<"digita nome dipendente"<<endl;
cin>>nome;
cout<<"digita l'anno di nascita"<<endl;
cin>>anno_nascita;
eta=anno_corrente-anno_nascita;
if(eta>64)
{contapensionabili=contapensionabili+1;}
else if(eta<18)
{contaminorenni=contaminorenni+1;}
cout<<"elenco dipendenti finito?"<<endl;
cin>>risposta;}while(risposta=="no");
cout<<"i dipendenti di eta' pensionabile sono"<<contapensionabili<<"i dipendenti minorenni sono"<<contaminorenni<<endl;
system("pause");}
