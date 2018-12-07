#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	   																								//PARA ESCANEO DE SENCILLAS PISO 1                
                                                                                                    int disp1,x1,y1;
                                                                                                    int SencPiso1[3][3]={{101,5,103},{104,5,6},{107,5,109}};
                                                                                                    int DisponSencPiso1[3][3]={{0,5,0},{0,5,6},{0,5,0}};
                                                                                                    int Oferta1[disp1];
                                                                                                    int posix1, posiy1;
                                                                                                    
                                                                                                    //PARA ESCANEO DE SENCILLAS PISO 2                
                                                                                                    int disp2,x2,y2;
                                                                                                    int SencPiso2[3][3]={{201,5,203},{204,5,6},{207,5,209}};
                                                                                                    int DisponSencPiso2[3][3]={{0,5,0},{0,5,6},{0,5,0}};
                                                                                                    int Oferta2[disp2];
                                                                                                    int posix2, posiy2;
                                                                                                    
                                                                                                    //PARA ESCANEO DE SENCILLAS PISO 3                
                                                                                                    int disp3,x3,y3;
                                                                                                    int SencPiso3[3][3]={{301,5,303},{304,5,6},{307,5,309}};
                                                                                                    int DisponSencPiso3[3][3]={{0,5,0},{0,5,6},{0,5,0}};
                                                                                                    int Oferta3[disp3];
                                                                                                    int posix3, posiy3;       
                                                                                                    
                                                                                                    //PARA ESCANEO DE KING PISO 4                
                                                                                                    int disp4,x4,y4;
                                                                                                    int KingPiso4[3][3]={{401,5,403},{404,5,6},{407,5,409}};
                                                                                                    int DisponKingPiso4[3][3]={{0,5,0},{0,5,6},{0,5,0}};
                                                                                                    int Oferta4[disp4];
                                                                                                    int posix4, posiy4;
                                                                                                    
                                                                                                    //PARA ESCANEO DE KING PISO 5               
                                                                                                    int disp5,x5,y5;
                                                                                                    int KingPiso5[3][3]={{501,5,503},{504,5,6},{507,5,509}};
                                                                                                    int DisponKingPiso5[3][3]={{0,5,0},{0,5,6},{0,5,0}};
                                                                                                    int Oferta5[disp5];
                                                                                                    int posix5, posiy5;
                                                                                                    
                                                                                                    //PARA ESCANEO DE KING PISO  6               
                                                                                                    int disp6,x6,y6;
                                                                                                    int KingPiso6[3][3]={{601,5,603},{604,5,6},{607,5,609}};
                                                                                                    int DisponKingPiso6[3][3]={{0,5,0},{0,5,6},{0,5,0}};
                                                                                                    int Oferta6[disp6];
                                                                                                    int posix6, posiy6;                                                                                              
	
																									//PARA ESCANEO DE SUIT PISO 7
                                                                                                    int disp7,x7,y7;
                                                                                                    int SuitPiso7[3][3]={{701,701,701},{702,5,6},{702,703,703}};
                                                                                                    int DisponSuitPiso7[3][3]={{1,0,1},{0,5,6},{1,0,1}};
                                                                                                    int Oferta7[disp7];
                                                                                                    int posix7, posiy7;
                                                                                                
	
	int operacion;  /*se guarda la seleccion de (OPER 1)*/
      int TipHab; /*Se guarda la seleccion de (OPER 1.1) */
      int OpcPlaya;/*Se guarda la seleccion de (OPER 1.1.1)*/
      int cambmenu;                                                                                       

    								printf("          Bienvenido al Hotel Marry Vill\n\n");  //BIENVENIDA
      
           //SELECCION DE OPERACION PRINCIPAL (OPER 1)
menuprincipal:
    printf("¿Como podemos ayudarle? Presione el indice de la opcion preferida\n\n\
        (1)- Ordenar una habitacion\n\
        (2)- Lista de precios de nuestos servicios\n\
        (3)- Vision y mision del hotel\n");
        
    scanf("%d",&operacion);
    system("CLS");  //borra para desplegar sig. menú.
    
    		switch(operacion){
    			case 1: 
ordenar:
					printf("PRIMERO: ¿Le gustaría tener acceso a la playa privada del Hotel?\n\n");
					printf("                    (1)- Si, me gustaria   (2)- No, en otro momento\n\n");
					scanf("%d",&OpcPlaya);
					system("CLS");
						if(OpcPlaya==1){//CON PLAYA
							printf("¿En que tipo de habitacion desea ospedarse?n(Las habitaciones se ecnuentran sujetas a disponibilidad)\n\n");
							printf("    (1)Sencilla \n    (2)Kingsize\n    (3)SuitPresidencial\n");
							scanf("%d",&TipHab);
							system("CLS");
								system("CLS");
								if(TipHab==1){
									        printf("          Habitaciones disponibles:\n\n");

											 			/*IMP. HABIT*/                                  for (x1=0; x1<3; x1++){
                                                        /*IMP. HABIT*/                              	    for (y1=0; y1<3; y1++){
                                                        /*IMP. HABIT*/                                    		printf(" [%d] ",DisponSencPiso1[x1][y1]);		
                                                        /*IMP. HABIT*/                                  	}
                                                        /*IMP. HABIT*/                                	printf("\n");
                                                        /*IMP. HABIT*/                               	}
                                                        
                                                                                                      disp1=0;
                                                                                                      printf("Del piso 1:\n\n");
                                                                                                      for (x1=0; x1<1; x1++){   //SÓLO SE ESCANEA LA PRIMERA LINEA SI QUIERE PLAYA, POR ESO el 'for' tiene 1 ciclo.
                                                                                                      		for (y1=0; y1<3; y1++){
                                                                                                                    if(DisponSencPiso1[x1][y1]==0){
                                                                                                                               posix1=x1;
                                                                                                                               posiy1=y1;
                                                                                                                 			   disp1= disp1+1;
                                                                                                                 			   Oferta1[x1]= SencPiso1[posix1][posiy1];
                                                                                                                 			   printf("         H. disp: %d",Oferta1[x1]);
                                                                                                                     		}
                                                                                                                     		printf("  \n");
                                                                                                                      	}
                                                                                                                    } 
																													printf("\n\n");
																										
											 			/*IMP. HABIT*/                                  for (x2=0; x2<3; x2++){
                                                        /*IMP. HABIT*/                              	    for (y2=0; y2<3; y2++){
                                                        /*IMP. HABIT*/                                    		printf(" [%d] ",DisponSencPiso2[x2][y2]);		
                                                        /*IMP. HABIT*/                                  	}
                                                        /*IMP. HABIT*/                                	printf("\n");
                                                        /*IMP. HABIT*/                               	}
                                                        
                                                                                                      disp2=0;
                                                                                                      printf("Del piso 2:\n\n");
                                                                                                      for (x2=0; x2<1; x2++){   //SÓLO SE ESCANEA LA PRIMERA LINEA SI QUIERE PLAYA, POR ESO el 'for' tiene 1 ciclo.
                                                                                                      		for (y2=0; y2<3; y2++){
                                                                                                                    if(DisponSencPiso2[x2][y2]==0){
                                                                                                                               posix2=x2;
                                                                                                                               posiy2=y2;
                                                                                                                 			   disp2= disp2+1;
                                                                                                                 			   Oferta2[x2]= SencPiso2[posix2][posiy2];
                                                                                                                 			   printf("         H. disp: %d",Oferta2[x2]);
                                                                                                                     		}
                                                                                                                     		printf("  \n");
                                                                                                                      	}
                                                                                                                    } 
																													printf("\n\n");
																													
																										for (x3=0; x3<3; x3++){
                                                        /*IMP. HABIT*/                              	    for (y3=0; y3<3; y3++){
                                                        /*IMP. HABIT*/                                    		printf(" [%d] ",DisponSencPiso3[x3][y3]);		
                                                        /*IMP. HABIT*/                                  	}
                                                        /*IMP. HABIT*/                                	printf("\n");
                                                        /*IMP. HABIT*/                               	}
                                                        
                                                                                                      disp3=0;
                                                                                                      printf("Del piso 3:\n\n");
                                                                                                      for (x3=0; x3<1; x3++){   //SÓLO SE ESCANEA LA PRIMERA LINEA SI QUIERE PLAYA, POR ESO el 'for' tiene 1 ciclo.
                                                                                                      		for (y3=0; y3<3; y3++){
                                                                                                                    if(DisponSencPiso3[x3][y3]==0){
                                                                                                                               posix3=x3;
                                                                                                                               posiy3=y3;
                                                                                                                 			   disp3= disp3+1;
                                                                                                                 			   Oferta3[x3]= SencPiso3[posix3][posiy3];
                                                                                                                 			   printf("         H. disp: %d",Oferta3[x3]);
                                                                                                                     		}
                                                                                                                     		printf("  \n");
                                                                                                                      	}
                                                                                                                    } 
																													printf("\n\n");                               
								}if(TipHab==2){
											printf("          Habitaciones disponibles:\n\n");

											 			/*IMP. HABIT*/                                  for (x4=0; x4<3; x4++){
                                                        /*IMP. HABIT*/                              	    for (y4=0; y4<3; y4++){
                                                        /*IMP. HABIT*/                                    		printf(" [%d] ",DisponKingPiso4[x4][y4]);		
                                                        /*IMP. HABIT*/                                  	}
                                                        /*IMP. HABIT*/                                	printf("\n");
                                                        /*IMP. HABIT*/                               	}
                                                        
                                                                                                      disp4=0;
                                                                                                      printf("Del piso 4:\n\n");
                                                                                                      for (x4=0; x4<1; x4++){   //SÓLO SE ESCANEA LA PRIMERA LINEA SI QUIERE PLAYA, POR ESO el 'for' tiene 1 ciclo.
                                                                                                      		for (y4=0; y4<3; y4++){
                                                                                                                    if(DisponKingPiso4[x4][y4]==0){
                                                                                                                               posix4=x4;
                                                                                                                               posiy4=y4;
                                                                                                                 			   disp4= disp4+1;
                                                                                                                 			   Oferta4[x4]= KingPiso4[posix4][posiy4];
                                                                                                                 			   printf("         H. disp: %d",Oferta4[x4]);
                                                                                                                     		}
                                                                                                                     		printf("  \n");
                                                                                                                      	}
                                                                                                                    } 
																													printf("\n\n");
																													
																												
														/*IMP. HABIT*/                                  for (x5=0; x5<3; x5++){
                                                        /*IMP. HABIT*/                              	    for (y5=0; y5<3; y5++){
                                                        /*IMP. HABIT*/                                    		printf(" [%d] ",DisponKingPiso5[x5][y5]);		
                                                        /*IMP. HABIT*/                                  	}
                                                        /*IMP. HABIT*/                                	printf("\n");
                                                        /*IMP. HABIT*/                               	}
                                                        
                                                                                                      disp5=0;
                                                                                                      printf("Del piso 5:\n\n");
                                                                                                      for (x5=0; x5<1; x5++){   //SÓLO SE ESCANEA LA PRIMERA LINEA SI QUIERE PLAYA, POR ESO el 'for' tiene 1 ciclo.
                                                                                                      		for (y5=0; y5<3; y5++){
                                                                                                                    if(DisponKingPiso5[x5][y5]==0){
                                                                                                                               posix5=x5;
                                                                                                                               posiy5=y5;
                                                                                                                 			   disp5= disp5+1;
                                                                                                                 			   Oferta5[x5]= KingPiso5[posix5][posiy5];
                                                                                                                 			   printf("         H. disp: %d",Oferta5[x5]);
                                                                                                                     		}
                                                                                                                     		printf("  \n");
                                                                                                                      	}
                                                                                                                    } 
																													printf("\n\n");
									
																																										
														/*IMP. HABIT*/                                  for (x6=0; x6<3; x6++){
                                                        /*IMP. HABIT*/                              	    for (y6=0; y6<3; y6++){
                                                        /*IMP. HABIT*/                                    		printf(" [%d] ",DisponKingPiso6[x6][y6]);		
                                                        /*IMP. HABIT*/                                  	}
                                                        /*IMP. HABIT*/                                	printf("\n");
                                                        /*IMP. HABIT*/                               	}
                                                        
                                                                                                      disp6=0;
                                                                                                      printf("Del piso 6:\n\n");
                                                                                                      for (x6=0; x6<1; x6++){   //SÓLO SE ESCANEA LA PRIMERA LINEA SI QUIERE PLAYA, POR ESO el 'for' tiene 1 ciclo.
                                                                                                      		for (y6=0; y6<3; y6++){
                                                                                                                    if(DisponKingPiso6[x6][y6]==0){
                                                                                                                               posix6=x6;
                                                                                                                               posiy6=y6;
                                                                                                                 			   disp6= disp6+1;
                                                                                                                 			   Oferta6[x6]= KingPiso6[posix6][posiy6];
                                                                                                                 			   printf("         H. disp: %d",Oferta6[x6]);
                                                                                                                     		}
                                                                                                                     		printf("  \n");
                                                                                                                      	}
                                                                                                                    } 
																													printf("\n\n");
								}if(TipHab==3){
																												/*IMP. HABIT*/                                  for (x7=0; x7<3; x7++){
                                                        /*IMP. HABIT*/                              	    for (y7=0; y7<3; y7++){
                                                        /*IMP. HABIT*/                                    		printf(" [%d] ",DisponSuitPiso7[x7][y7]);		
                                                        /*IMP. HABIT*/                                  	}
                                                        /*IMP. HABIT*/                                	printf("\n");
                                                        /*IMP. HABIT*/                               	}
                                                        
                                                                                                      disp7=0;

                                                                                                      for (x7=0; x7<1; x7++){   //SÓLO SE ESCANEA LA PRIMERA LINEA SI QUIERE PLAYA, POR ESO el 'for' tiene 1 ciclo.
                                                                                                      		for (y7=0; y7<3; y7++){
                                                                                                                    if(DisponSuitPiso7[x7][y7]==0){
                                                                                                                               posix7=x7;
                                                                                                                               posiy7=y7;
                                                                                                                 			   disp7= disp7+1;
                                                                                                                     		}
                                                                                                                      	}
                                                                                                                    } 
                                                                                                            if(disp7==1){
                                                                                                                printf("La Suit Presidencial si està disponible, numero: 701");
                                                                                                                
                                                                                                            }else{
                                                                                                                printf("Disculpe. Suit Presidencial no disponible por ahora");
                                                                                                            }
                                                                                                                
																													printf("\n\n");
								}
								
						}if(OpcPlaya==2){//SIN PLAYA
							printf("¿En que tipo de habitacion desea ospedarse?\n(Las habitaciones se ecnuentran sujetas a disponibilidad)\n\n");
							printf("    (1)Sencilla \n    (2)Kingsize\n    (3)Suit\n    (4)SuitPresidencial\n");
							scanf("%d",&TipHab);
							system("CLS");
								system("CLS");
								if(TipHab==1){
									printf("Hola");	
								}if(TipHab==2){
									printf("Hola");
								}if(TipHab==3){
									printf("Hola");
								}if(TipHab==4){
									printf("Hola");
								}
						}	
					
    			break;
    				
    			case 2:
precios:
    				printf("     TIPO DE HABITACION:                    PRECIO POR DIA:  \n\n");
    				printf("     Sencilla                                $750         \n");
    			    printf("     KingSize                                $950         \n");
    				printf("     Suit                                    $1100        \n");
    				printf("     Suit presidencial                       $1500      \n\n");    				
    				printf("**CUALQUIER HABITACION CON ACCESO A LA PLAYA:    +$200 **   ");
					printf("\n\n                (1)- Menu principal (2)- Ordenar habitacion\n\n");   
					scanf("%d",&cambmenu);
					
						if (cambmenu==1){
							system("CLS");
							goto menuprincipal;
						}	if (cambmenu==2){
							system("CLS");
							goto ordenar;
						}else{
							system("CLS");
							printf("Seleccione una operacion valida\n\n");
							goto precios;
						}	
				break;
				
				case 3:
misionvision:
					printf("                                  MARRY VILL\n\n");
					printf("HISTORIA:\n\n");
					printf("     Fundado en Cancun en 1975, Marry Vill es pionero de la industria tu-\n");
				    printf("     ristica de México y una compañía lider en la industria internacional\n");
					printf("     de propiedades vacacionales.\n\n");
					
					printf("MISION:\n\n");
					printf("     Ser una organización líder en las industrias de Propiedad Vacacional y\n");
					printf("     Hospitalidad ofreciéndole a nuestros socios y huespedes productos y ser-\n"); 
					printf("     vicios innovadores, personalizados y de primera categoria y proporcionan-\n");
					printf("     doles una experiencia vacacional excepcional con el más alto nivel de sa-");
					printf("     tisfaccion, siempre operando con etica, transparencia y responsabilidad\n");
					printf("     social\n\n");
				
					printf("VISION:\n\n");
					printf("     Ser la empresa mexicana lIder en los mercados de propiedad vacacional,\n");
					printf("     fraccional y residencial de lujo ofreciendo los mejores servicios y ame-\n");
					printf("     nidades.");
		
					printf("\n\n\n                          (1)- Menu principal (2)- Ordenar habitacion\n\n");   
					scanf("%d",&cambmenu);
					
						if (cambmenu==1){
							system("CLS");
							goto menuprincipal;
						}	if (cambmenu==2){
							system("CLS");
							goto ordenar;
						}else{
							system("CLS");
							printf("Seleccione una operacion valida");
							goto misionvision;
						}		
				break;
					
				case 3312:
					printf("         Bienvenido al sistema privado de administracion\n\n");
    			break;
			}
      
	return 0;
}
