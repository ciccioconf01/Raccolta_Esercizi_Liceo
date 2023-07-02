//francesco conforto//
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
string risposta;
int velocita;
int contatore;
int main()
{;do{cout<<"digita velocita'"<<endl;
cin>>velocita;
if(velocita>120)
{contatore=contatore+1;}
cout<<"elenco finito?"<<endl;
cin>>risposta;
}while(risposta=="no");
cout<<"le macchine che hanno superato il limite di velocita'' sono state"<<contatore<<endl;
system("pause");}
