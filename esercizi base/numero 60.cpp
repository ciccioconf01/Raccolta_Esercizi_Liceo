//francesco conforto//
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int copie_vendute;
string giorno;
int contagiorno;
int accumulatorecopie;
int massimo;
string x;
string risposta;
float media;
int main()
{;do{cout<<"digita giorno"<<endl;
cin>>giorno;
cout<<"digita numero di copie vendute"<<endl;
cin>>copie_vendute;
contagiorno=contagiorno+1;
accumulatorecopie=accumulatorecopie+copie_vendute;
if(copie_vendute>massimo)
{massimo=copie_vendute;
x=giorno;}
cout<<"elenco giorni finito"<<endl;
cin>>risposta;}while(risposta=="no");
cout<<"la vendita massima e' stata fatta"<<x<<"e sono state vendute"<<massimo<<"copie"<<endl;
media=accumulatorecopie/contagiorno;
cout<<"la media e'"<<media<<endl;
system("pause");}
