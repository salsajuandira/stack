/*Salsabila Juandira
  2117051012
  A
  Program stack Parkiran
*/
#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<windows.h>
#include "stack.h"
#define max 10
using namespace std;

int main(){
    int pilih;
    char mobil[10];
    	string i;
        awal();
    do{
    system("cls");
	    cout<<"========= Program Parkiran mobil =========" <<endl;  /*Menampilkan header*/
        cout<<" \n 1. Push"<<endl;
        cout<<" 2. POP"<<endl;
		cout<<" 3. Exit"<<endl;
        cout<<"==========================================" <<endl;
                       
    if (!isEmpty()){	
        for(int i = baris.top; i>=0; i--){
            cout<<"["<<baris.tmp[i]<<"]"<<endl;     
    	}
    }
	else{
        cout<<"[Parikran kosong]";
    }
        cout<<"\nMasukan Pilihan : ";
        cin>>pilih;
    switch (pilih){
        case 1:
    	cout<<"Jenis mobil : ";
    	cin>>mobil;
        push(mobil);
        break;
        
		case 2:
        pop ();
        break;
        
		case 3:
        cout<<"Tekan enter untuk keluar : ";
        break;
    	default:
    	cout<<"ERROR!";
        break;
                                               
        }
    }
    while (pilih!=3);
       
}
