#include<stdio.h>
//calcolo tassa di possesso
float tassa(int kilowatt,char veicolo){
	const float tarA=2.58,tarM=19.11;
	float costo;
	if(veicolo=='a'){
		costo=kilowatt*tarA;
	}
	else{
		costo=kilowatt*tarM;
	}
	return costo;
}

//procedura ordinamento vettori
void ordinamento(int kilo[],int id[],float tassa[],char tipologia[],int dim){
	int i,j,auxint;
	char auxcara;
	float auxflo;
	for(i=0;i<dim-1;i++){
		for(j=i;j<dim;j++){
			if(kilo[i]>kilo[j]){
				//vettore kilowatt
				auxint=kilo[i];
				kilo[i]=kilo[j];
				kilo[j]=auxint;
				//vettore identificativo
				auxint=id[i];
				id[i]=id[j];
				id[j]=auxint;
				//vettore tipologia
				auxcara=tipologia[i];
				tipologia[i]=tipologia[j];
				tipologia[j]=auxcara;
				//vettore tassa
				auxflo=tassa[i];
				tassa[i]=tassa[j];
				tassa[j]=auxflo;
			}	
		}
	}
}
//procedura di stampa 
void stampa(int v1,char v2,int v3,float v4){
	printf("Identificativo veicolo:%d	",v1);
	printf("Tipologia del veicolo:%c		",v2);
	printf("KiloWatt:%d	",v3);
	printf("Tassa di possesso:%f Euro\n",v4);
}

int main(){
	const int n=5;
	float tass[n];
	int i,id[n],kw[n];
	char tipo[n];
	//caricamento vettori 
	for(i=0;i<n;i++){
		printf("Inserire numero identificativo(numero): ");
		scanf("%d",&id[i]);
		printf("Inserire KiloWatt veicolo: ");
		scanf("%d",&kw[i]);
		scanf("%c");
		do{
			printf("Inserire tipologia del veicolo('a' per Auto,'m'per Moto): ");
			scanf("%c",&tipo[i]);
			scanf("%c");
			if(tipo[i]!='a'&&tipo[i]!='m'){
				printf("Carattere inserito non corretto!\n");
			}
		}while(tipo[i]!='a'&&tipo[i]!='m');
		tass[i]=tassa(kw[i],tipo[i]);//chiamata calcolo della tassa 
	}
	//chiamata procedura ordinamento 
	ordinamento(kw,id,tass,tipo,n);
	
	//stampa degli array
	for(i=0;i<n;i++){
		stampa(id[i],tipo[i],kw[i],tass[i]);
	}
	return 0;
}
