/*Carlos Paredes Márquez.
Actividad n.4 seminario de algoritmia.
16/09/2020.*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#define c 5
#define t 100

//struct personaje.
struct personaje{
	char nombre[t];
	char tipo[t];
	float fuerza;
	float salud;
}proto[c];

//función mostrar.
//void show(int n, float arreglo[]);

//función principal.
int main(void){
	
	char res=0;
	
	do{
		int i;
		int op;
		int reg=0;
		
		float arreglo[5];
		float suma=0;
		float promedio=0;
		
	    printf("Actividad #4 seminario de algoritmia:\n\n\n");
	    printf("Ingresar arreglo: [1]\nMostrar arreglo: [2]\nStruct de personajes: [3]\n\n\n");
	    scanf("%i",&op); system("cls"); res=0;
	    
	    do{
		    
			switch(op){
	    	
		    	case 1:
				
		    		//recopilación de datos de arreglo.
		    		printf("Ingresar arreglo de 5 digitos:\n\n\n");
		    		    for(i=0;i<5;i++){
		    		    	printf("Ingrese el valor del arreglo: [%i] -    ", i+1);
		    			    scanf("%i",&arreglo[i]);
		    		    }
				
			    	//suma de areglo.
			    	printf("\n\n\n");
			        	for(i=0;i<5;i++){
			    		suma = suma + arreglo[i];
			    	}
			    	printf("La suma del arreglo es: [%.f]\n",suma);
				
			    	//promedio de arreglo.
			    	promedio = suma/c;
			    	printf("El promedio del arreglo: [%.f]\n",promedio);
			    	reg++; //reg++ es para evitar mostrar el arreglo si no existe.
			    	break;
			
		    	/*case 2:
			    	if(reg==0){
			    		printf("Aun no registra un arreglo.\n");
			    	}
				
		    		if(reg!=0){
		    			show(n,arreglo);
		    		}
			    	break;*/
			
			default: printf("Error.\n");
		}    	
		}while(res=='s'||res=='S');
	    

	    
	    printf("Volver a repetir programa: [s]\n");
	    fflush(stdin); scanf("%c",&res);
	    
	}while(res=='s'||res=='S');
	
	return 0;
}
