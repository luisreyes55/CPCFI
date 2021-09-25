#include<stdio.h>

void edo0();
void edo1();
void edo2();
void edo3();
void edo4();
void edo5();

char cad[20];
int i=-1;

main(){
	
FILE *ap;
ap=fopen("vocales.txt","r");
int j=0;

while(feof(ap)==NULL){

cad[j]=fgetc(ap);

if(cad[j]==' '||cad[j]=='\n'||cad[j]=='\t'||cad[j]==EOF){
	printf(":)\n");
	edo0();
	j=0,i=-1;
	}
j++;
}
fclose(ap);
}
void edo0(){

i++;
if(cad[i]=='a')
edo1();
else if(cad[i]=='e'||cad[i]=='i'||cad[i]=='o'||cad[i]=='u'||cad[i]=='\0'||cad[i]==' ')										
printf("Cadena NO valida");
else
edo0();
}

void edo1(){

i++;
if(cad[i]=='e')
edo2();
else if(cad[i]=='i'||cad[i]=='o'||cad[i]=='u'||cad[i]=='\0'||cad[i]==' ')										
printf("Cadena NO valida");
else
edo1();
}

void edo2(){

i++;
if(cad[i]=='i')
edo3();
else if(cad[i]=='a'||cad[i]=='o'||cad[i]=='u'||cad[i]=='\0'||cad[i]==' ')										
printf("Cadena NO valida");
else
edo2();
}

void edo3(){

i++;
if(cad[i]=='o')
edo4();
else if(cad[i]=='a'||cad[i]=='e'||cad[i]=='u'||cad[i]=='\0'||cad[i]==' ')										
printf("Cadena NO valida");
else
edo3();
}

void edo4(){

i++;
if(cad[i]=='u')
edo5();
else if(cad[i]=='a'||cad[i]=='e'||cad[i]=='i'||cad[i]=='\0'||cad[i]==' ')										
printf("Cadena NO valida");
else
edo4();
}

void edo5(){

i++;
if(cad[i]=='a'||cad[i]=='e'||cad[i]=='i'||cad[i]=='o')										

printf("Cadena NO valida");
else if(cad[i]=='\0'||cad[i]==' ')
printf("Cadena  valida");
else
edo5();
}/*#include <stdio.h>

void edo0();
void edo1();
void edo2();
void edo3();
void edo4();
void edo5();

char cad[10];
int i = -1;

int main(){
    FILE *ap;
    ap = fopen("vocales.text","r");
    int n = 0;
    while(ap == NULL){
        cad[n] = fgetc(ap);
        if(cad[n] == ' ' || cad[n] =='\n' || cad[n] == '\t' || cad[n] == EOF ){
            edo0();
            n=0;
            i = -1;           
        }
        n++;
    }
    fclose(ap);
}

void edo0(){
	i++;
	if(cad[i] == 'a')
		edo1();
	else if (cad[i] == 'e' || cad[i] == 'i' || cad[i] == 'o' || cad[i] == 'u' || cad[i] == '\0' || cad[i] == ' '){
		printf("Cadena no Valida \n");
    }else{
		edo0();}
}

void edo1(){
	i++;
	if(cad[i] == 'e')
		edo2();
	else if (cad[i] == 'i' || cad[i] == 'o' || cad[i] == 'u' || cad[i] == '\0' || cad[i] == ' '){
		printf("Cadena no Valida \n");
    }else{
		edo1();}
}

void edo2(){
	i++;
	if(cad[i] == 'i')
		edo3();
	else if (cad[i] == 'a' || cad[i] == 'o' || cad[i] == 'u' || cad[i] == '\0' || cad[i] == ' '){
		printf("Cadena no Valida \n");
    }else{
		edo2();}
}


void edo3(){
	i++;
	if(cad[i] == 'o')
		edo4();
	else if (cad[i] == 'a' || cad[i] == 'e' || cad[i] == 'u' || cad[i] == '\0' || cad[i] == ' '){
		printf("Cadena no Valida \n");
    }else{
		edo3();}
}

void edo4(){
	i++;
	if(cad[i] == 'i')
		edo5();
	else if (cad[i] == 'a' || cad[i] == 'e' || cad[i] == 'o' || cad[i] == '\0' || cad[i] == ' '){
		printf("Cadena no Valida \n");
    }else{
		edo4();}
}


void edo5(){
	i++;
	if (cad[i] == 'a' || cad[i] == 'e' || cad[i] == 'i' || cad[i] == 'o'){
		printf("Cadena no Valida \n");
    }else if(cad[i] == '\0' || cad[i] == ' '){
		printf("Cadena no Valida \n");}
    else{    edo5();}
}
*/