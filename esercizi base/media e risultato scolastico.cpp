//francesco paolo conforto//
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
string nome;
int voto;
string materia;
int conta_materie;
int conta_insufficienze;
int accumulatore_voto;
string risposta;
int numero;
int media;
int main()
{cout<<"digita il nome dell'alunno"<<endl,
cin>>nome;
do {cout<<"digita la materia"<<endl;
cin>>materia;
cout<<"digita voto"<<endl;
cin>>voto;
conta_materie=conta_materie+1;
if(voto<6)
{conta_insufficienze=conta_insufficienze+1;}
accumulatore_voto=accumulatore_voto+voto;
cout<<"elenco finito?"<<endl;
cin>>risposta;
}while(risposta=="no");
cout<<"digita 1 se vuoi vedere la media, digita 2 se vuoi vedere se sei stato promosso, rimandato o bocciato"<<endl;
cin>>numero;
if(numero=1)
{media=accumulatore_voto/conta_materie;
cout<<"la media e'"<<media<<endl;}
else if(numero=2)
{
 	if(conta_insufficienze=0)
 	{cout<<"sei stato promosso"<<endl;}
 	else if(conta_insufficienze>3)
 	{cout<<"sei stato bocciato"<<endl;}
 	else 
 	{cout<<"sei stato rimandato"<<endl;}

}
else
{cout<<"ERRORE"<<endl;}
system("pause");}


