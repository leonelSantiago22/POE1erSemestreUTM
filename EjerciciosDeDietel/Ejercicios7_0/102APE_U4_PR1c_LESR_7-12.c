#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void shuffle(int [][13]);
void deal(const int[][13], const char *[], const char*[]);
int Analizar(int xcartas[], int scartas[]);
int pares=0, tercia=0;

int main()
{
    srand(time(NULL));
    const char *suit[4]={"Corazones", "Diamantes", "Trebol", "Espadas"};
    const char *face[13]={"AS", "Dos", "Tres", "Cuatro","Cinco", "Seis", "Siete", "Ocho"
                    ,"Nueve", "Diez", "Jack", "Reyna", "Rey"};

    //int xF[53] = {0};
    //int xN[53] = { 0 };

    int deck[4][13]= {0};

    shuffle(deck);
    deal(deck, face, suit);
    return 0;
}

void shuffle(int wDeck[][13])
{
    int card, row, column;

    for (card  = 1; card <=52; card++)
    {
        row = rand() % 4;
        column = rand() % 13;

        while (wDeck[row][column]!=0)
        {
            row = rand () % 4;
            column = rand() %13;
        }
        wDeck[row][column]=card;   
    }
}

void deal(const int wDeck[][13], const char *wFace[], const  char *wSuit[])
{
    int card, row, column;
    int *cartas;
    int n[13];
    int s[13];
    //int *tmp2[4][13]={0};

    for ( card = 1; card <= 5; card++)
    {
        for ( row = 0; row<=3; row++)
        {
            for ( column = 0; column <= 12; column++)
            {   
                if (wDeck[row][column]==card)
                {
                    printf("\n%5s de  %s", wFace[column], wSuit[row]); 
                    n[card] = (int)wFace[column];
                    s[card] = (int)wSuit[row];
                }  
            }    
        }
       
    } 
    //cartas = n;
    Analizar(n,s);
    //tmp2 = wDeck[row][column];
    //Analizar(tmp2);
}

int Analizar( int xcartas[],int scartas[])
{
    int rojas=0, negras=0;
    int poker=0;
    int flor=0;
    int temp2[14]={0}; 
    int *cards; //int Num[15];
    //int num2[52]={0};
    for (int i = 1; i <=5; i++)
    {
        for (int  j = 1; j <= 5; j++)
        {
        if (xcartas[i]==*(xcartas+j)|| xcartas[j]==*(xcartas+i))
            { 
                 
             if (pares==10)
             {
                 poker++;
                 //pares = 0;
             }
             if (pares==8)
            {
                tercia++;
                flor++;
            }
            pares++; 
            }
        }
    }

    for (int i = 0; i <=3; i++)
    {
        if (scartas[i]==scartas[0])
        {
            rojas++;
            flor++;
        }
    }
    printf("\n\n\n\nTienes pares: %d", (pares-5)/2);
    printf("\nTercias: %d", tercia);
    printf("\nPokers: %d", poker);
    printf("\nFull color: %d", rojas/4);
    printf("\nFlo imperial : %d", flor=0);
}