#include<stdio.h>
#include<stdlib.h>
void scambio(int*xp,int*yp) {
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void ordinamento(int kw[]) {
    int i,j,minx,n;
    for (i=0;i<n;i++) 
	{
        minx=i;
        for(j=i+1;j<n;j++){
            if (kw[j]<kw[minx]){
                minx=j;}
        scambio(&kw[minx],&kw[i]); }
    }
}
float costo (int kw[],char veic[])
{
	int i;
	float tassa[2];
	do{
	if(veic[i]=='a')
	{
		tassa[i]=kw[i]*2.58;
		return *tassa;
	}
    else
	{
		tassa[i]=kw[i]*19.11;
		return *tassa;
	}
	}while ((veic[i]=='a')&&(veic[i]=='m'));
}
void stampa(int ident[2],int kw[2],float tassa[2],char veic[2])
{	
	int i;
	printf("Il numero del veicolo \202:%d\n",ident[i]);
	printf("Il suo numero di Kw \202:%d\n",kw[i]);
	printf("\202 una:%c\n",veic[i]);
	printf("E bisogna pagare:%f\n",tassa[i]);
	i=i+1;	
}
int main ()
{
	int i,n;
	int ident[2],kw[2];
	float tassa[2];
	char veic[2];
	n=2;
	for(i=0;i<n;i++)
	{
	printf("Dammi il numero del veicolo: \n");
	scanf("%d",& ident[i]);
	printf("Dammi il numero di kw: \n");
	scanf("%d",& kw[i]);
	printf("Che veicolo \202: \n");
	scanf("%s",& veic[i]);
	}
	for(i=0;i<n;i++)
	{
		tassa[i]=costo(kw,veic);
	}
	for(i=0;i<n;i++){	
	stampa(ident,kw,tassa,veic);
}
	ordinamento(kw);
}
