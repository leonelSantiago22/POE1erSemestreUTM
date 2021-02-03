#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void shuffle(int [][13]);
void deal(const int[][13], const char *[], const char *[]);
void Analizar(const char *[]);
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
    const char *ana[13];

    for ( card = 1; card <= 5; card++)
    {
        for ( row = 0; row<=3; row++)
        {
            for ( column = 0; column <= 12; column++)
            {   
                if (wDeck[row][column]==card)
                {
                    printf("\n%5s de  %s", wFace[column], wSuit[row]); 
                }  
            }    
        }
       
    } 
}