#include <stdio.h>
#include <stdlib.h>

int main() {

    float a, b;
    float risultato, frazionale=0;
    int operazione;
    float f;
    float r;
    int q;
    float pippo;
    int t;
    
        printf("\nInserire primo opeando (a) ");
        scanf("%f",&a);
        printf("\nInserire secondo operando (b) ");
        scanf("%f", &b);
        printf("\n1-moltiplicazione; \n2-divisione; \n3-elevazione a potenza; \n4-divisione normale con il resto; \n5-addizione; \n6-sottrazione\n");
        printf("Scegli l'operazione ");
        scanf("%d", &operazione);
                
            switch (operazione) {
                    case 1:
                        risultato=a*b; 
                        printf("%f*%f=%f\n", a, b, risultato);
                        break;
                    case 2:
                        risultato=a/b; 
                        printf("%f/%f=%f\n", a, b, risultato);
                        break;
                    case 3:
                        q=0;
                        risultato=1;
                        while (q<b) {
                            risultato*=a;
                            q++;
                        }       
                        printf("%f^%d=%f\n", a, (int)b, risultato);       
                        break;
                    case 4: 
                        pippo= a/b;
                        t= (int) a/b;
                        printf("\nLa parte intera e': %d", t);
                        r= pippo - t;
                        printf("\nIl resto e': %f", r); 
                        printf("%f/%f= %d (intera) e %f (frazionale)\n", a, b, (int)risultato, frazionale);
                        break;
                    case 5:
                        risultato=a+b; 
                        printf("%f+%f=%f\n", a, b, risultato);
                        break;
                    case 6:
                        risultato=a-b; 
                        printf("%f-%f=%f\n", a, b, risultato);
                        break;
                    default:;
            }
            
    return 0;
    
}
