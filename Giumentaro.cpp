#include<stdio.h>
void ordina(int vv[5],int vk[5],float vc[5],char vt[5]){  //creo la procedura per ordinare in modo crescente
int i,j,aux1,aux2;
float aux3;
char aux4;
for(i=0;i<5;i++){
  for(j=i+1;j<5;j++){
     if(vk[i]>=vk[j]){
     	
       aux1=vv[i];
       vv[i]=vv[j];
       vv[j]=aux1;
       
       aux2=vk[i];
       vk[i]=vk[j];
       vk[j]=aux2;
       
       aux3=vc[i];
       vc[i]=vc[j];
       vc[j]=aux3;
       
       aux4=vt[i];
       vt[i]=vt[j];
       vt[j]=aux4;
     }
   }
 }
}
int calcola(int vk[5],float vc[5],char vt[5]){   //creo una funzione per calcolare in base a che veicolo è la tassa di spesa
	int i;
	char a,m;
	float x,y,tot;
	x=2.58;
	y=19.11;
	for(i=0;i<5;i++){
		if(vt[i]==a){
			vc[i]=x*vk[i];
		}
		if(vt[i]==m){
			vc[i]=y*vk[i];
		}
	
	}
	return vc[i];
}
stampap(int vv[5],int vk[5],float vc[5],char vt[5]){   //creo una procedura che stampi tutti i vettori ordinati in modo crescente in base ai kw
	int i;
	for(i=0;i<5;i++){
		printf("\nTARGA DEL VEICOLO: %d\nTIPO DI VEICOLO: %c\nQUANTI KW HA IN POSSESSO: %d\nTASSA DEL VEICOLO: %f\n",vv[i],vt[i],vk[i], vc[i]);
	}
}
int main(){
	int vv[5],vk[5],i;
	char vt[5],a,m;
	float vc[5];
	for(i=0;i<5;i++){
		printf("identificare il veicolo con la targa(un singolo numero): ");
		scanf("%d",&vv[i]);
		printf("identificare il veicolo per quanti kW ha: ");
		scanf("%d",&vk[i]);
		printf("identificare il veicolo come a per Auto e m per Moto: ");
		scanf("%c");
		scanf("%c",&vt[i]);
	}
  calcola(vk,vc,vt);
	ordina(vv,vk,vc,vt);   //richiamo delle procedure
	stampap(vv,vk,vc,vt);
}

