  #include <stdio.h>
#include <stdlib.h>
#include <time.h>

char matrizpo1 [8][8];
char Mjuga1[8][8];
char matar1 [8][8];
char matar2 [8][8];

int lenum, num,fila,colum,numna;
char letra, let1, let2,let3;
char funexist(){
matrizpo1[fila][colum]='.';
printf("\n Hemos eliminado la posicion inicial, vuelve a ingresar otra\t");
 scanf("%s %i",&letra,&num);
 funletran();
        while (matrizpo1[num-1][lenum]=='O'){
	          printf("POSICION EN USO\n");
	          scanf("%s",&letra);
              scanf("%i",&num);
			  funletran();
       }
  fila=num-1;
  colum=lenum;


}
int funletran(){//transformar de letra a numero
 if (letra=='a' || letra == 'A')
	  lenum=0;
  else if (letra=='b' || letra == 'B')
	  lenum=1;
  else if (letra=='c' || letra == 'C')
	  lenum=2;
  else if (letra=='d' || letra == 'D')
	  lenum=3;
  else if (letra=='e' || letra == 'E')
	  lenum=4;
  else if (letra=='f' || letra == 'F')
      lenum=5;
  else if (letra=='g' || letra == 'G')
	 lenum=6;
  else if (letra=='h' || letra == 'H')
	 lenum=7;
	else
		lenum=100;
}
char funposi2(){//poner nave en Vertical, arriba o abajo
	int i,j;
	  if (let2=='A'){
	      if (numna==0||numna==1){
	      		if (fila==0){
		      	printf("NO SE PUEDE");
		      	funexist();
		      	matrizpo1[fila][colum]='O';
	      		}
                if (matrizpo1[fila-1][colum]=='O'){//Si la posicion en horizontal new ya exitia llamo a la funcion funexist para volver a ingresar una posicion inicial//
				    funexist();
				    matrizpo1[fila][colum]='O';
				    if (matrizpo1[fila-1][colum]=='O'){
	                    funexist();
	                    matrizpo1[fila][colum]='O';
	                    matrizpo1[fila-1][colum]='O';
				    }
				    matrizpo1[fila-1][colum]='O';
					}
				else{
				  matrizpo1[fila-1][colum]='O';}
	      }

		  else if (numna==2 || numna==3){
		  		if (fila==0||fila==1){
		      	printf("NO SE PUEDE");
		      	funexist();
		      	matrizpo1[fila][colum]='O';
	      		}
		      if (matrizpo1[fila-1][colum]=='O' || matrizpo1[fila-2][colum]=='O'){
		  			funexist();
				    matrizpo1[fila][colum]='O';
				    if (matrizpo1[fila-1][colum]=='O' || matrizpo1[fila-2][colum]=='O'){
					  funexist();
					matrizpo1[fila-1][colum]='O';
				    matrizpo1[fila-2][colum]='O';
				    }
				    matrizpo1[fila-1][colum]='O';
				    matrizpo1[fila-2][colum]='O';
		  		}
		  		else {
		  	matrizpo1[fila-1][colum]='O';
			matrizpo1[fila-2][colum]='O';}
		  }
		  else{
		  	if (fila==0||fila==1||fila==2){
		      	printf("NO SE PUEDE");
		      	funexist();
	      		}
		  		if (matrizpo1[fila-1][colum]=='O' || matrizpo1[fila-2][colum]=='O'|| matrizpo1[fila-3][colum]=='O'){
		  			funexist();
				    matrizpo1[fila][colum]='O';
				    if (matrizpo1[fila-1][colum]=='O' || matrizpo1[fila-2][colum]=='O'|| matrizpo1[fila-3][colum]=='O'){
	                  funexist();
				    matrizpo1[fila][colum]='O';
					 matrizpo1[fila-1][colum]='O';
				    matrizpo1[fila-2][colum]='O';
		            matrizpo1[fila-3][colum]='O';
				    }
				    matrizpo1[fila-1][colum]='O';
				    matrizpo1[fila-2][colum]='O';
		            matrizpo1[fila-3][colum]='O';
		  		}
			matrizpo1[fila-1][colum]='O';
		    matrizpo1[fila-2][colum]='O';
			matrizpo1[fila-3][colum]='O';}
	  }
	  else{
	      if (numna==0||numna==1){
	      		if (fila==7){
		      	printf("NO SE PUEDE");
		      	funexist();
		      	matrizpo1[fila][colum]='O';
	      		}
	        if (matrizpo1[fila+1][colum]=='O'){
				    funexist();
				    matrizpo1[fila][colum]='O';
				    if (matrizpo1[fila+1][colum]=='O'){
					funexist();
				    matrizpo1[fila][colum]='O';
	                matrizpo1[fila+1][colum]='O';
				    }
				    matrizpo1[fila+1][colum]='O';
					}
			else{
				  matrizpo1[fila+1][colum]='O';}

	      }
		  else if (numna==2 || numna==3){
		  		if (fila==7||fila==6){
		      	printf("NO SE PUEDE");
		      	funexist();
		      	matrizpo1[fila][colum]='O';
	      		}
		      	if (matrizpo1[fila+1][colum]=='O' || matrizpo1[fila+2][colum]=='O'){
		  			funexist();
				    matrizpo1[fila][colum]='O';
				    if (matrizpo1[fila+1][colum]=='O' || matrizpo1[fila+2][colum]=='O'){
	                 funexist();
				    matrizpo1[fila][colum]='O';
					matrizpo1[fila+1][colum]='O';
				    matrizpo1[fila+2][colum]='O';
				    }
				    matrizpo1[fila+1][colum]='O';
				    matrizpo1[fila+2][colum]='O';
		  		}
		  		else {
				    matrizpo1[fila+1][colum]='O';//si es izquierda le resta 1 o 2 o 3, a la posicion primera y si no, le suma
			        matrizpo1[fila+2][colum]='O';}
			}
		  else{
		  	if ((fila==7||fila==6||fila==5)){
		      	printf("NO SE PUEDE");
		      	funexist();
		      	matrizpo1[fila][colum]='O';
	      		}
		    if (matrizpo1[fila+1][colum]=='O' || matrizpo1[fila+2][colum]=='O'|| matrizpo1[fila+3][colum]=='O'){
		  			funexist();
				    matrizpo1[fila][colum]='O';
				    if (matrizpo1[fila+1][colum]=='O' || matrizpo1[fila+2][colum]=='O'|| matrizpo1[fila+3][colum]=='O'){
	                funexist();
				    matrizpo1[fila][colum]='O';
					matrizpo1[fila+1][colum]='O';
				    matrizpo1[fila+2][colum]='O';
		            matrizpo1[fila+3][colum]='O';
				    }
				    matrizpo1[fila+1][colum]='O';
				    matrizpo1[fila+2][colum]='O';
		            matrizpo1[fila+3][colum]='O';
		  		}
			matrizpo1[fila+1][colum]='O';
		    matrizpo1[fila+2][colum]='O';
			matrizpo1[fila+3][colum]='O';}

	  }

}
char funposi3(){//poner naves horizontas, izquierda o derecha
	int i,j;
	  if (let3=='I'){
	      if (numna==0||numna==1){
	      		if (colum==0){
		      	printf("NO SE PUEDE");
		      	funexist();
		      	matrizpo1[fila][colum]='O';
	      		}
				if (matrizpo1[fila][colum-1]=='O'){//Si la posicion en horizontal new ya exitia llamo a la funcion funexist para volver a ingresar una posicion inicial//
				    funexist();
				    matrizpo1[fila][colum]='O';
				    if (matrizpo1[fila][colum-1]=='O'){
	                funexist();
				    matrizpo1[fila][colum]='O';
					matrizpo1[fila][colum-1]='O';
				    }
				    matrizpo1[fila][colum-1]='O';
					}
				else{
				  matrizpo1[fila][colum-1]='O';}}
		  else if (numna==2 || numna==3){
		  	if (colum==0||colum==1){
		      	printf("NO SE PUEDE");
		      	funexist();
		      	matrizpo1[fila][colum]='O';
	      		}
		  		if (matrizpo1[fila][colum-1]=='O' || matrizpo1[fila][colum-2]=='O'){
		  			funexist();
				    matrizpo1[fila][colum]='O';
				    if (matrizpo1[fila][colum-1]=='O' || matrizpo1[fila][colum-2]=='O'){
	                 funexist();
				    matrizpo1[fila][colum]='O';
					matrizpo1[fila][colum-1]='O';
				    matrizpo1[fila][colum-2]='O';
				    }
				    matrizpo1[fila][colum-1]='O';
				    matrizpo1[fila][colum-2]='O';
		  		}
		  		else {
		  	matrizpo1[fila][colum-1]='O';//si es izquierda le resta 1 o 2 o 3, a la posicion primera y si no, le suma
			matrizpo1[fila][colum-2]='O';}
			}
		  else{
		  	if (colum==0||colum==1 ||colum==2){
		      	printf("NO SE PUEDE");
		      	funexist();
		      	matrizpo1[fila][colum]='O';
	      		}
		  		if (matrizpo1[fila][colum-1]=='O' || matrizpo1[fila][colum-2]=='O'|| matrizpo1[fila][colum-3]=='O'){
		  			funexist();
				    matrizpo1[fila][colum]='O';
				    if (matrizpo1[fila][colum-1]=='O' || matrizpo1[fila][colum-2]=='O'|| matrizpo1[fila][colum-3]=='O'){
					funexist();
				    matrizpo1[fila][colum]='O';
					matrizpo1[fila][colum-1]='O';
				    matrizpo1[fila][colum-2]='O';
				    matrizpo1[fila][colum-3]='O';
				    }
				    matrizpo1[fila][colum-1]='O';
				    matrizpo1[fila][colum-2]='O';
				    matrizpo1[fila][colum-3]='O';
		  		}
		  	else {
			matrizpo1[fila][colum-1]='O';
		    matrizpo1[fila][colum-2]='O';
			matrizpo1[fila][colum-3]='O'; }}
	  }
	  else{
	      if (numna==0||numna==1){
	      		if (colum==7){
		      	printf("NO SE PUEDE");
		      	funexist();
		      	matrizpo1[fila][colum]='O';
	      		}
				if (matrizpo1[fila][colum+1]=='O'){//Si la posicion en horizontal new ya exitia llamo a la funcion funexist para volver a ingresar una posicion inicial//
				    funexist();
				    matrizpo1[fila][colum]='O';
				    if (matrizpo1[fila][colum+1]=='O'){
					funexist();
					matrizpo1[fila][colum]='O';
				    matrizpo1[fila][colum+1]='O';
				    }

				    matrizpo1[fila][colum+1]='O';
					}
				else{
				  matrizpo1[fila][colum+1]='O';}}
		  else if (numna==2 || numna==3){
		  	if (colum==7||colum==6){
		      	printf("NO SE PUEDE");
		      	funexist();
		      	matrizpo1[fila][colum]='O';
	      		}
		  		if (matrizpo1[fila][colum+1]=='O' || matrizpo1[fila][colum+2]=='O'){
		  			funexist();
				    matrizpo1[fila][colum]='O';
				    if (matrizpo1[fila][colum+1]=='O' || matrizpo1[fila][colum+2]=='O'){
	                funexist();
				    matrizpo1[fila][colum]='O';
					matrizpo1[fila][colum+1]='O';
				    matrizpo1[fila][colum+2]='O';
				    }
				    matrizpo1[fila][colum+1]='O';
				    matrizpo1[fila][colum+2]='O';
		  		}
		  		else {
		  	matrizpo1[fila][colum+1]='O';//si es izquierda le resta 1 o 2 o 3, a la posicion primera y si no, le suma
			matrizpo1[fila][colum+2]='O';}
			}
		  else{
		  	if (colum==7||colum==6||colum==5){
		      	printf("NO SE PUEDE");
		      	funexist();
		      	matrizpo1[fila][colum]='O';
	      		}
		  		if (matrizpo1[fila][colum+1]=='O' || matrizpo1[fila][colum+2]=='O'|| matrizpo1[fila][colum+3]=='O'){
		  			funexist();
				    matrizpo1[fila][colum]='O';
				    if (matrizpo1[fila][colum+1]=='O' || matrizpo1[fila][colum+2]=='O'|| matrizpo1[fila][colum+3]=='O'){
	                 funexist();
				    matrizpo1[fila][colum]='O';
					matrizpo1[fila][colum+1]='O';
				    matrizpo1[fila][colum+2]='O';
				    matrizpo1[fila][colum+3]='O';
				    }
				    matrizpo1[fila][colum+1]='O';
				    matrizpo1[fila][colum+2]='O';
				    matrizpo1[fila][colum+3]='O';
		  		}
		  	else {
			matrizpo1[fila][colum+1]='O';
		    matrizpo1[fila][colum+2]='O';
			matrizpo1[fila][colum+3]='O'; }}

	  }

}


void ImprimirBarco(){
    system ("cls");
    printf ("\t                                               _______                                                  \n");
    printf ("\t                                               |_____|                                                  \n");
    printf ("\t                                               |     |                                                  \n");
    printf ("\t                                       ________|_____|________                                          \n");
    printf ("\t                                       |                     |                                          \n");
    printf ("\t                                       |    O     O     O    |                                          \n");
    printf ("\t                                       |                     |                                          \n");
    printf ("\t                                  _____|_____________________|_______                                   \n");
    printf ("\t                _____            |                                   |                                  \n");
    printf ("\t               |____ |           |      O       O      O      O      |                                  \n");
    printf ("\t                   | |           |                                   |                                  \n");
    printf ("\t            _______|_|___________|___________________________________|_____________________             \n");
    printf ("\t           |                                                                              |            \n");
    printf ("\t            \\                                                                            /            \n");
    printf ("\t~~~~~~~~~~~~~\\                     |          BATTLESHIP         |                      /~~~~~~~~~~~~~\n");
    printf ("\t~~~~~~~~~~~~~~\\                                                                        /~~~~~~~~~~~~~~\n");
    printf ("\t~~~~~~~~~~~~~~~\\______________________________________________________________________/~~~~~~~~~~~~~~~\n");
    printf ("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}


void main (){
    int i, j,k,nn;
    char name1[15];
    char name2[15];
    ImprimirBarco();
    printf ("BIENVENIDO A BATTLESHIP\n\n");


    printf ("REGLAS DEL JUEGO\n");
    printf ("\t1. Las naves se colocan en posicion horizontal y vertical (no diagonal).\n\t2. No repetir las mismas coordenadas.\n\t3. Colocar las naves dentro del tablero.\n\t5. No colocar las naves una sobre otra\n");
    printf ("\n\nJugador 1 - Ingrese su nombre:\n\t");
    gets (name1);
    printf ("\n\nJugador 2 - Ingrese su nombre:\n\t");
    gets (name2);
    system ("cls");
    for(nn=0;nn<2;nn++){
	    printf("\n Jugador %i\n",(nn+1));
        printf ("Las naves son:\n\t Nave 1: ##\n\t Nave 2: ##  \n\t Nave 3: ###\n\t Nave 4: ###\n\t Nave 5: ####\n");
        printf ("\n Ingrese la posicion de sus naves\t\n");
        for (i=0;i<8;i++){
             for (j=0; j<8; j++){
                  matrizpo1[i][j]= '.';
       }
   }
     printf ("\tA\t B\t C\t D\t E\t F\t G\t H");
     printf ("\n\t____________________________________________________________");
  for (i=0;i<8;i++){
       printf ("\n %i", (i+1));
         for (j=0; j<8; j++){
             printf ("\t%c  |  ", matrizpo1 [i][j]);
       }
       printf ("\n\t____________________________________________________________");
   }
        for(i=0;i<5;i++){ //numero de naves
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf ("\n\nNave %i :\n\t",(i+1));
        numna=i;
        scanf("%s %i",&letra,&num);
        printf("\t");
        funletran();
        while (matrizpo1[num-1][lenum]=='O'){
	          printf("POSICION EN USO\n");
	          scanf("%s",&letra);
              scanf("%i",&num);
			funletran();
       }
        while (lenum<0||lenum>7){
	             printf("\nColumna fuera de rango\n");
	          scanf("%s",&letra);
			funletran();
       }
       while (num<1||num>8){
	             printf("\nFila fuera de rango\n");
              scanf("%i",&num);
       }

       matrizpo1[num-1][lenum]='O';
       fila=num-1;
       colum=lenum;
       printf ("\n¿Posicion\n\t V = vertical  u H = horizontal?\t");
       scanf ("%s", &let1);//let1 es vertical u horizontal
       while (let1!='V' && let1!='H'){
       		printf("\nIngresa otra vez:\t");
     scanf ("%s", &let1);
     }
     if (let1=='V'){
	     printf("\n \tA = Arriba  0 a= Abajo\t");
	     scanf ("%s", &let2);//let2 es arriba o abajo
	 while (let2!='A' && let2!='a'){
       		printf("\nIngresa otra vez:\t");
            scanf ("%s", &let2);
     }
        funposi2();
        system ("cls");
     }

     else{
	   printf("\n \tI = Izquierda  0 D= Derecha\t");
	     scanf ("%s", &let3);//let2 es arriba o abajo
	 while (let3!='I' && let3!='D'){
       		printf("\nIngresa otra vez:\t");
            scanf ("%s", &let3);
     }
       funposi3();
       system ("cls");
     }
printf ("\tA\t B\t C\t D\t E\t F\t G\t H");
     printf ("\n\t____________________________________________________________");
  for (k=0;k<8;k++){
       printf ("\n %i", (k+1));
            for (j=0; j<8; j++){
            printf ("\t%c  |  ", matrizpo1 [k][j]);
       }
       printf ("\n\t____________________________________________________________");
    }
    }
  for (k=0;k<8;k++){
            for (j=0; j<8; j++){
             matrizpo1 [k][j]=Mjuga1[k][j];
       }
    }

   for (i=0;i<8;i++){
            for (j=0; j<8; j++){
             matrizpo1 [i][j]='.';
       }}
    system ("pause");
    system("cls");
    }
     printf ("\n\tA\t B\t C\t D\t E\t F\t G\t H");
     printf ("\n\t____________________________________________________________");
  for (i=0;i<8;i++){
       printf ("\n %i", (i+1));
            for (j=0; j<8; j++){
            printf ("\t%c  |  ", Mjuga1 [i][j]);
       }
       printf ("\n\t____________________________________________________________");
    }
    printf("\n");
    system ("pause");
    printf("\n");
    system ("cls");
}
