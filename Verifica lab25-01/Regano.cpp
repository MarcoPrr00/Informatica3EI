#include<stdio.h>
float tassafunzione(float kW[],float tassaf[]){ //dichiarazione variabili nella funzione
	int i;
	char tipov[i];
	float tariffaA=2.58;
	float tariffaM=19.11;
	if(tipov[i]='a'){ 	//controllo del tipo di veicolo
		tassaf[i]=kW[i]*tariffaA;	//calcolo tassa
		printf("La tassa della'automobile \202: %d\n",tariffaA);
	}
	if(tipov[i]='m'){
		tassaf[i]=kW[i]*tariffaM;//calcolo tassa
		printf("La tassa della moto \202: %d\n",tariffaM);
	}
	return tassaf[5];
}
void ordinamento(float kW[5]){ //dichiarazione variabili nella procedura
	int i,j,n=5,posmax,aux;
	for(i=0;i<n;i++){	//oridinamento
		i=posmax;
		for(j=0;j<n;j++){
			aux=kW[i];
			kW[i]=kW[j];
			kW[j]=aux;
		}
	}
}
void stampa(float kW[5],int identificativo[5],char tipov[5],float tassa[5]){
	int i;
	printf("L'identificativo del veicolo \202:  %d",&identificativo[i]);	//stampa informazioni veicolo
	printf("Il tipo del veicolo \202: %d",&tipov[i]);	//stampa informazioni veicolo
	printf("I kW del veicolo sono: %d",&kW[i]);	//stampa informazioni veicolo
	printf("La tassa da pagare sul veicolo \202: ",&tassa[i]);	//stampa informazioni veicolo
}
int main(){
	int identificativo[5];
	char tipov[5],m,a;
	int i,n=5,j,posmax;
	float tassa[5],tassaf[5],kW[5],tariffaA,tariffaM;
	for(i=0;i<n;i++){
		printf("Inserisci l'identificativo del veicolo: ");	//caricamento vettore
		scanf("%d",&identificativo[i]);
	}
	for(i=0;i<n;i++){
		printf("Inserisci i kW del veicolo: ");	//caricamento vettore
		scanf("%f",&kW[i]);
	}
	for(i=0;i<n;i++){
		printf("Inserisci il tipo del veicolo(a(auto) o M(moto)): ");	//caricamento vettore
		scanf("%c\n",&tipov[i]);
	}
	tassa[i]=tassafunzione(kW,tassaf);	//chiamata funzione
	ordinamento(kW);	//chiamata procedura
	stampa(kW,identificativo,tipov,tassa);	//chiamata procedura di stampa
	printf("Vettore ordinato: %d",&ordinamento);
	printf("La tassa della'automobile \202: %d\n",&tariffaA);
	printf("La tassa della moto \202: %d\n",&tariffaM);
}
	
