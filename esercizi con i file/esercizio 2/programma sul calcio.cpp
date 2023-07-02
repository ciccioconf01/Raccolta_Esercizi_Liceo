#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>
using namespace std;
fstream file2;
string nome, nazionalita;
int punteggio, eta;
int massimo=0;
	string x, y;

void mas(){
	
	file2.open("calcio.txt", ios::in);
	file2>>nome>>punteggio>>nazionalita>>eta;
	do
	{
		
		if(punteggio>massimo){
			x=nome;
			y=nazionalita;
			massimo=punteggio;
			file2>>nome>>punteggio>>nazionalita>>eta;
		}
		else{
			file2>>nome>>punteggio>>nazionalita>>eta;
		}
	}while(!file2.eof());
	cout<<x<<" "<<y<<" "<<massimo<<endl;
	file2.close();
	
}

void anziano(){
	string nazionalita_esterna;
	cout<<"digita la nazionalita di cui si vuole sapere il piu' anziano"<<endl;
	cin>>nazionalita_esterna;
	file2.open("calcio.txt", ios::in);
	file2>>nome>>punteggio>>nazionalita>>eta;
	do{
		if(eta>massimo and nazionalita_esterna==nazionalita){
			massimo=eta;
			x=nome;
			file2>>nome>>punteggio>>nazionalita>>eta;
		}
		
		else{
			file2>>nome>>punteggio>>nazionalita>>eta;
		}
	}while(!file2.eof());
	
	cout<<x<<" "<<massimo<<endl;
}

int main(){
	int scelta;
	string risposta;
	do{
	
	cout<<"digita:"<<endl<<"1=giocatore con il punteggio piu' alto"<<endl<<"2=giocatore piu' anziano di una data nazionalita'"<<endl;
	cin>>scelta;
	switch(scelta){
		case 1:
			mas();
			break;
		case 2:
			anziano();
			break;
		default:
			cout<<"errore"<<endl;
			break;
	}
	cout<<"vuoi tornare al menu'"<<endl;
	cin>>risposta;
	}while(risposta=="si");
	system("pause");
}
