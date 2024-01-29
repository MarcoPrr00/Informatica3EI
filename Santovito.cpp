#include<stdio.h>
float tassa(int vkW,char vtv, int dim){
	float vt;
	if(vtv=='a'){
		vt=vkW*2,58;
	}else{
		if(vtv=='m'){
		vt=vkW*19,11;
		}
	}
	return vt;
}
void scambio(int *vkW,int *vkW2){
	int aux;
	aux=*vkW;
	*vkW=*vkW2;
	*vkW2=aux;
}
void ordinamento(int vkW[], int viv[], int dim){
	for(int i=0;i<dim-1;i++){
		for(int j=i;j<dim;j++){
			if(viv[i]>viv[j]){
					scambio(&vkW[i],&vkW[j]);
					scambio(&viv[i],&viv[j]);
			}
		}
	}
}
void stampa(char vtv, int vkW,float vt, int dim){
	for(int i=0;i<dim;i++){
		printf("%c",vtv[i]);
		printf("%d",vkW[i]);
		printf("%d",vt[i]);
	}
}
int main(){
	int n=5,i;
	int vkW[n],viv[n],vt[n],vtv[n];
	for(i=0;i<n;i++){
		printf("insereire identificativo veicolo: ");
		scanf("%d",&viv[i]);
		printf("inserire i KiloWatt: ");
		scanf("%d",&vkW[i]);
		printf("inserisci tipo veicolo: ");
		scanf("%c",&tv);
		if((tv=='a')||(tv=='m')){
		}else("errore!!")
	}
	ordinamento(ckW,viv,n);
	printf("stampa del vettore ordinato\n");
	stampa(vtv,vkW,vt,n);
}
