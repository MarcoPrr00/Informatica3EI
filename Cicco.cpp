#include<stdio.h>
void calcolot(double tassam, double tassato,double costounim[],double costounito[],int i=0){
     tassam=19.11;
     tassato=2.58;
     int kilowatt=0;
     double costouni=0; 
     scanf("chiedere il tipo di veicolo:");
     if(i==0){
     *costounim=(kilowatt)*tassam;
     *costounito=(kilowatt)*tassato;
     printf("costo unitario della tassa : ");
	}
     else 
     printf("il veicolo non è corretto");
}
void ordinamento(int v[],int v1[],int n,int aux,int i,int j){
	for (i=0;i<=n;i=i+1)
		{
			for(j=0;j<=n,j=j+1){
			aux=v[i];
			v[i]=v[j];
			v[j]=aux;	
			}
		}
	}
int main(double costounimo[],double costounit[]){
	
}
    

    






