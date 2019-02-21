#include<stdio.h>
#include<math.h>


float solucion(float a, float b, float c)
{
 	fflush(stdin);
    fflush(stdout);
	float discriminante, x1, x2, xi, xr;	
   discriminante = pow(b, 2.0) - (4 * a * c);
   if(discriminante > 0.0) 
   {
     printf("\n\t\tLas dos raices son reales\n");
     x1 = (( -b + sqrt(discriminante)) / (2.0 * a));
     x2 = (( -b - sqrt(discriminante)) / (2.0 * a));
     printf("\n\t\tx1 = %.2f   x2 = %.2f", x1, x2);
  } 
   else if(discriminante == 0.0) 
   {
         x1 = -b / (2.0 * a);
         printf("\n\t\tLa ecuacion solo tiene una raiz %.2f", x1); 
  } 
  else 
  {
        xr = -b / (2.0*a);
        xi = sqrt(-discriminante) / (2.0*a);
        printf("\n\t\tx1 = %.2f    x2 = %.2f i", xr, xi);
  }  
  return 0;
} 


 int main()
 {
    float a, b, c;
    int respuesta;	  
    printf("\n\t\t\tPrograma Chicharronera");
  	printf("\n\t\t\t______________________\n");
  	printf("\n\t\tEste programa tiene como objetivo encontrar las raices\n\t\tde una ecuacion de segundo grado sin excluir a los\n\t\tnumeros complejos.\n\n\n");

  	system("pause");
    do{
    	system("cls");
    	printf("\n\t\tSolucion de una ecuacion de segundo grado");
	    printf("\n\t\t_________________________________________\n\n");
	    printf("\t\t a + bx + cx^2\n\n");
	    printf("\t\tEscribe el valor de a --> ");
	    scanf("%f", &a);
	    while (a == 0) 
		{
	          printf("\tEl valor de a no puede ser 0 ingrese el valor de nuevo -->");
	          scanf("%f", &a);
	    }
	    printf("\t\tEscribe el valor de b --> ");
	    scanf("%f", &b);
	    printf("\t\tEscribe el valor de c --> ");
	    scanf("%f", &c);
	    solucion(a,b,c);
	    printf("\n\n\250Desea volver a ejecutar el programa?\nSi=1\nNo=2\n\t\tRespuesta:");
       scanf("%d", &respuesta);
       while(respuesta != 1 && respuesta != 2)
       {
      	 printf("\n\n\t\t*Valor no valido intente de nuevo*");
      	 printf("\n\n\250Desea volver a ejecutar el programa?\nSi=1\nNo=2\n\t\tRespuesta:");
         scanf("%d", &respuesta);
       }
       }while( respuesta == 1 );
    return 0;
 } 
