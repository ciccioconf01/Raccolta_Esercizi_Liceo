//francesco conforto//
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
string codice_fiscale;
int reddito;
string nome;
string risposta;
int main()
{;do{cout<<"digita il codice fiscale"<<endl;
cin>>codice_fiscale;
cout<<"digita il reddito"<<endl;
cin>>reddito;
cout<<"digita il nome"<<endl;
cin>>nome;
if(reddito>30000)
{cout<<"il signor"<<nome<<"codice fiscale:"<<codice_fiscale<<"ha un reddito maggiore di 30000 euro"<<endl;}
else
{cout<<"il signor"<<nome<<"ha il reddito inferiore a 30000"<<endl;}
cout<<"elenco finito?"<<endl;
cin>>risposta;}while(risposta=="no");
system("pause");}
