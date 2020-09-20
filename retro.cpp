/*Carlos Paredes M�rquez.
Actividad n.4 seminario de algoritmia.
16/09/2020.*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#define c 5
#define t 200

//funci�n mostrar arreglo.
void show(int n, float arreglo[]);
//función capturar personajes.
void capturar_personajes(void);
//función mostrar personajes.
void mostrar_personajes(void);

//funci�n principal.
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
	    	
	        printf("Salir: [0]\nIngresar arreglo: [1]\nMostrar arreglo: [2]\n");
			printf("Struct de personajes: [3]\nMostrar struct de personajes: [4]\n\n\n");
	        scanf("%i",&op); system("cls"); int reg;
		    
			    switch(op){

					case 0:
					    return 0;
						break;
	    	
		    	    case 1:
		    	    	
		    	    	printf("Ingresar arreglo:\n\n\n");
				
		    		    //recopilaci�n de datos de arreglo.
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
					    capturar_personajes();		
	    		    	break;

					case 4:
					    mostrar_personajes();
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
