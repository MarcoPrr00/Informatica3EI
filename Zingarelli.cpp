#include<stdio.h>

float tariffa(int x,char t){
	float tar=0;				//variabile che contiene la tariffa
	float aut=2.58, moto=19.11;	//dichiarazioni delle tariffe
	
	//calcolo della tariffa 
	if(t=='a'){
		tar=x*aut;
	}else{
		tar=x*moto;
	}
	
	return tar;
}

void ordina(int vi[],int vk[],char vt[],float v[],int n){
	int aux,pmin;
	char cux;
	float fux;
	
	for (int i=0;i<n-1;i++){
		pmin=i;
		for(int j=i+1;j<n;j++){
			if(vk[pmin]>vk[j]){
				pmin=j;
			}
		} 
		
		//scambio del vettore della tariffa 
		fux=v[i];
		v[i]=v[pmin];
		v[pmin]=fux;
		
		//scambio del vettore del tipo
		cux=vt[i];
		vt[i]=vt[pmin];
		vt[pmin]=cux;
		
		//scambio del vettore dei kw
		aux=vk[i];
		vk[i]=vk[pmin];
		vk[pmin]=aux;
		
		//scambio del vettore dell'identificativo 
		aux=vi[i];
		vi[i]=vi[pmin];
		vi[pmin]=aux;
	}
	

}

void stampa(int vi[],int vk[],char vt[],float v[],int n){
	for (int i=0;i<n;i++){
		
		printf("\n\ni dati della vettura con l'identificativo '%d' sono:",vi[i]);	
		printf("\n	KiloWatt: %d",vk[i]);
		printf("\n	tipo: %c",vt[i]);
		printf("\n	tariffa: %.02f",v[i]);	
	
	}
}


int main() {
    
	int n=5;		//dimensione del vettore
    int id[n],kw[n];//vettore identificativo e vettore dei KiloWatt
    char tp[n];		//vettore del tipo
    float prz[n];	//vettore del prezzo della tariffa
	
	for (int i = 0; i < n; i++) {
        
        printf("\ninserisci i dati della vettura n.%d: \n", i+1);
        
        //caricamento dell'identificativo
		printf("	identificativo: "); 
        scanf("%d", &id[i]);
        
        //caricamento dei KiloWatt
		printf("	KiloWatt:"); 
        scanf("%d", &kw[i]);
        
        //caricamento del tipo di vettura
		do{
        	scanf("%c");	//pulizia del buffer
			printf("	tipo ('a' per auto e 'm' per moto): "); 
        	scanf("%c", &tp[i]);
        	
        	if(!((tp[i]=='a')||(tp[i]=='m'))){
        		printf("puoi inserire solo il 'a' per auto e 'm' per moto\n");
			}
		}while(!((tp[i]=='a')||(tp[i]=='m')));
		
		//caricamento della tariffa
		prz[i]=tariffa(kw[i],tp[i]);
    }
    
    // ordinamento
    ordina(id,kw,tp,prz,n);
    
    //stampa dei vettori ordinati
    stampa(id,kw,tp,prz,n);

}
