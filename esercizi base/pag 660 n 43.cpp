//francesco paolo conforto//
#include<iostream>
#include<cstdlib>
using namespace std;
int punteggio;
int titolo_di_studio;
int punteggiof;
int main()
{cout<<"digita punteggio prova"<<endl;
cin>>punteggio;
cout<<"digita titolo di studio 1=elementare 2=media 4=superiore 7=laurea 0=nessun titolo"<<endl;
cin>>titolo_di_studio;
switch(titolo_di_studio)
{case 1:
punteggiof=1+punteggio;
break;
case 2:
punteggiof=2+punteggio;
break;
case 4:
punteggiof=4+punteggio;
break;
case 7:
punteggiof=7+punteggio;
break;
case 0:
punteggiof=punteggio;
break;
default:
cout<<"errore"<<endl;
break;
}
cout<<"il punteggio e'"<<punteggiof<<endl;
system("pause");
}
