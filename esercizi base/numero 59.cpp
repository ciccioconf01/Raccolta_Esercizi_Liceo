//francesco conforto//
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
float peso;
float altezza;
string nome;
float indice_obesita;
int k;
string risposta;
int main()
{;do{cout<<"digita nome"<<endl;
cin>>nome;
cout<<"digita peso"<<endl;
cin>>peso;
cout<<"digita altezza"<<endl;
cin>>altezza;
indice_obesita=peso/altezza;
k=50;
if(indice_obesita>=k)
{cout<<nome<<"ha superato l'indice di obesita'"<<endl;}
else
{cout<<nome<<"non ha superato l'indice di obesita'"<<endl;}
cout<<"elenco persone finito?"<<endl;
cin>>risposta;
}while(risposta=="no");
system("pause");}
