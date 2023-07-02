//francesco conforto//
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
float raggio;
string risposta;
float area;
float circonferenza;
int main()
{;do{cout<<"digita raggio"<<endl;
cin>>raggio;
if(raggio>0 and raggio<21)
{area=raggio*raggio*3.14;
circonferenza=2*raggio*3.14;
cout<<"l'area e'"<<area<<"la circonferenza e'"<<circonferenza<<endl;}
else
{cout<<"errore"<<endl;}
cout<<"elenco finito?"<<endl;
cin>>risposta;}while(risposta=="no");
system("pause");
}

