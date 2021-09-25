#include <stdlib.h>
#include <stdio.h>
char c;
FILE *archivo;

void edo0();
void edo1();


main(){

	
	archivo = fopen("prueba.txt","r");
	if(archivo ==NULL){
		printf("\nError ");
		
	}else{
		while(feof(archivo) == 0){
			fscanf(archivo,"%c",&c);
	
			edo0();
		}
	}
}

void edo0(){
	
	if(c=='0' || c=='1' || c=='2'|| c=='3'|| c=='4'|| c=='5'|| c=='6'|| c=='7'|| c=='8'|| c=='9'){
		edo1();
	}else{
		printf("No es un numero");
	}
}
void edo1(){
	printf("%c\n",c);
	fscanf(archivo,"%c",&c);
	if(feof(archivo) != 0){
		printf("Se acepta");
	}else 	if(c=='0' || c=='1' || c=='2'|| c=='3'|| c=='4'|| c=='5'|| c=='6'|| c=='7'|| c=='8'|| c=='9'){
		edo1();
	}else{
		printf("No es un numero");
	}
}

/*#include <stdio.h>
#include <stdlib.h>

char c;
void edo0();
void edo1();
FILE *archivo;
main(){	
	archivo=fopen("prueba.txt","r");
	if(archivo==NULL){
		printf("Error al abrir el archivo");
	}
	else{
		while(feof(archivo)==NULL){
			fscanf(archivo, "%c",&c);
			edo0();	
		}
	}
}

void edo0(){
	if(feof(archivo)!=0){

	}else if(c=='0' || c=='1' || c=='2' || c=='3' || c=='4'|| c=='5' || c=='6' || c=='7' || c=='8' || c=='9'){
		edo1();
	}
	else{
		printf("No es un número");
	}
}

void edo1(){

	fscanf(archivo, "%c",&c);
	if(c=='0' || c=='1' || c=='2' || c=='3' || c=='4' || c=='5' || c=='6' || c=='7' || c=='8' || c=='9'){
		edo1();
	}
	else if(c==EOF){
		printf("Sí es un número");
	}
	else{
		printf("No es un número");
	}
}
*/