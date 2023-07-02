//francesco conforto//
#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
using namespace std;
fstream file1;
string codice, partenza, arrivo, risposta;
int orap, oraa;

void carica(){
	file1.open("voli.txt", ios::out);
	do{
		cout<<"digita il codice del volo"<<endl;
		cin>>codice;
		cout<<"digita la localita' di partenza"<<endl;
		cin>>partenza;
		cout<<"digita l'ora di partenza"<<endl;
		cin>>orap;
		cout<<"digita la localita' di arrivo"<<endl;
		cin>>arrivo;
		cout<<"digita l'ora di arrivo"<<endl;
		cin>>oraa;
		file1<<codice<<" "<<partenza<<" "<<orap<<" "<<arrivo<<" "<<oraa<<endl;
		cout<<"vuoi inserire altri voli?"<<endl;
		cin>>risposta;
	}while(risposta=="si");
	file1.close();
	
}

void ricerca(){
	string arrivo_esterno;
	cout<<"digita la localita' di cui si vuole ricercare il volo"<<endl;
	cin>>arrivo_esterno;
	file1.open("voli.txt", ios::in);
	file1>>codice>>partenza>>orap>>arrivo>>oraa;
	do{
		if(arrivo_esterno==arrivo){
			cout<<"codice volo: "<<codice<<" da: "<<partenza<<" a: "<<arrivo<<" ora partenza: "<<orap<<" ora arrivo: "<<oraa<<endl;
			file1>>codice>>partenza>>orap>>arrivo>>oraa;

		}
	}while(!file1.eof());
	file1.close();
}

void min(){
	int tempo;
	int minimo=1000;
	string partenza_esterna, x, arrivo_esterno;
	cout<<"digita il luogo di partenza"<<endl;
	cin>>partenza_esterna;
	cout<<"digita il luogo di arrivo"<<endl;
	cin>>arrivo_esterno;
	file1.open("voli.txt", ios::in);
		file1>>codice>>partenza>>orap>>arrivo>>oraa;

	do{
		if(partenza_esterna==partenza and arrivo_esterno==arrivo){
			tempo=oraa-orap;
				file1>>codice>>partenza>>orap>>arrivo>>oraa;

		}
		
		if(tempo<minimo){
			minimo=tempo;
			x=codice;
				file1>>codice>>partenza>>orap>>arrivo>>oraa;

		}
		
	}while(!file1.eof());
	
	cout<<"il volo piu' veloce ha codice: "<<x<<endl;
	file1.close();
}

void modifica(){
	string codice_esterno, newcod;
	cout<<"digita il codice da sostituire"<<endl;
	cin>>codice_esterno;
	file1.open("voli.txt", ios::app);
	file1>>codice>>partenza>>orap>>arrivo>>oraa;
	do{
		if(codice_esterno==codice){
			cout<<"digita il nuovo codice"<<endl;
			cin>>newcod;
			codice=newcod;
			file1<<codice<<" ";
			file1>>codice>>partenza>>orap>>arrivo>>oraa;
		}
		else{
			file1>>codice>>partenza>>orap>>arrivo>>oraa;
		}
	}while(!file1.eof());
	}
	
	void inserisci(){
			file1.open("voli.txt", ios::app);
	do{
		cout<<"digita il codice del volo"<<endl;
		cin>>codice;
		cout<<"digita la localita' di partenza"<<endl;
		cin>>partenza;
		cout<<"digita l'ora di partenza"<<endl;
		cin>>orap;
		cout<<"digita la localita' di arrivo"<<endl;
		cin>>arrivo;
		cout<<"digita l'ora di arrivo"<<endl;
		cin>>oraa;
		file1<<codice<<" "<<partenza<<" "<<orap<<" "<<arrivo<<" "<<oraa<<endl;
		cout<<"vuoi inserire altri voli?"<<endl;
		cin>>risposta;
	}while(risposta=="si");
	file1.close();
	}

int main(){
	int scelta;
	carica();
	do{
	
	cout<<"digita"<<endl<<" 1: per visualizzare tutti i voli dato l'arrivo"<<endl<<"2: per visualizzare il codice del volo piu' veloce"<<endl<<"3=modifica un codice"<<endl<<"4=aggiungere altri voli"<<endl;
	cin>>scelta;
	switch(scelta){
		case 1:
			ricerca();
			break;
		case 2:
			min();
			break;
		case 3:
			modifica();
			break;
		case 4:
			inserisci();
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
