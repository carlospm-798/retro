/*Carlos Paredes Márquez.
Actividad n.4 seminario de algoritmia.
16/09/2020.*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#define c 5
#define t 200

//struct personaje.
struct personaje{
	char nombre[t];
	char tipo[t];
	float fuerza;
	float salud;
}proto[c];

//función mostrar.
void show(int n, float arreglo[]);

//función principal.
int main(void){
	
	char res=0;
	
	printf("Actividad #4 seminario de algoritmia:\n\n\n");
	
	do{
		int i;
		int op;
		int n=0;
		
		float arreglo[5];
		float suma=0;
		float promedio=0;
		
		char respuesta=0;
		
	    do{
	    	
	        printf("Ingresar arreglo: [1]\nMostrar arreglo: [2]\nStruct de personajes: [3]\n\n\n");
	        scanf("%i",&op); system("cls"); int reg;
		    
			    switch(op){
	    	
		    	    case 1:
		    	    	
		    	    	printf("Ingresar arreglo:\n\n\n");
				
		    		    //recopilación de datos de arreglo.
		    		    printf("Ingresar arreglo de 5 digitos:\n\n\n");
		    		        for(i=0;i<5;i++){
		    		        	printf("Ingrese el valor del arreglo: [%i] -    ", i+1);
		    		    	    scanf("%f",&arreglo[i]);
		    	    	    }
				
			        	//suma de areglo.
			        	printf("\n\n\n");
			            	for(i=0;i<5;i++){
			        		suma = suma + arreglo[i];
			        	}
			        	printf("La suma del arreglo es: [%.f]\n",suma);
				
			        	//promedio de arreglo.
			        	promedio = suma/c;
			        	printf("El promedio del arreglo: [%.2f]\n\n\n",promedio);
			        	reg = 1; //reg++ es para evitar mostrar el arreglo si no existe.
			        	break;
			
	    	    	case 2:
	    	    		
	    	    		printf("Repetir programa <n> veces:\n\n\n");
	    	    		
	    		    	if(reg==0){
	    		    		printf("Aun no registra un arreglo.\n\n\n");
	    		    		system("pause"); system("cls"); respuesta='s';
	    		    	}
				
	    	    		if(reg==1){
	    	    			printf("Cuantas veces quiere ver el arreglo?    ");
	    	    			scanf("%i",&n); printf("\n\n\n");
	    	    			show(n,arreglo);
	    	    		}
	    		    	break;
	    		    	
	    		    case 3:
	    		    	printf("Struct de personajes:\n\n\n");
	    		    	
	    		    	for(i=0;i<c;i++){
	    		    		fflush(stdin);
	    		    		printf("Nombre de personaje  [%i]:    ",i+1);
							gets(proto[i].nombre);
	    		    		printf("Tipo de personaje    [%i]:    ",i+1);
							gets(proto[i].tipo);
	    		    		printf("Fuerza de personaje  [%i]:    ",i+1);
	    		    		scanf("%f",&proto[i].fuerza);
	    		    		printf("Salud de personaje   [%i]:    ",i+1);
	    		    		scanf("%f",&proto[i].salud);
	    		    		printf("\n");
						}
						system("cls");
						
						printf("Datos de personajes: \n\n\n");
						
						for(i=0;i<c;i++){
							printf("Nombre P[%i]:    \t%s\n", i+1, proto[i].nombre);
							printf("Tipo   P[%i]:    \t%s\n", i+1, proto[i].tipo);
							printf("Fuerza P[%i]:    \t%.2f\n", i+1, proto[i].fuerza);
							printf("Salud  P[%i]:    \t%.2f\n", i+1, proto[i].salud);
							printf("\n");
						}
						
	    		    	break;
			
	    		    default: printf("Error.\n");
			
			    printf("\n\n\nUsar otra funsion: [s] -    ");
			    fflush(stdin); scanf("%c",&respuesta);
			    
		    }
		    //fin switch.
		}while(respuesta=='s'||respuesta=='S');
	    system("pause"); system("cls");
	    printf("Volver a repetir programa: [s]\n");
	    fflush(stdin); scanf("%c",&res); system("cls");
	    
	}while(res=='s'||res=='S');
	
	return 0;
}

void show(int n, float arreglo[]){
	
	//mostrar en pantalla n veces el arreglo.
	
	int i;
	int j;
	
	j=0;
	while(j<n){
		
		for(i=0;i<5;i++){
			//mostrar arreglo.
			printf("%.f ",arreglo[i]);
		}
		printf("\n");
		
		j++;
	}
	printf("\n\n\n");
}