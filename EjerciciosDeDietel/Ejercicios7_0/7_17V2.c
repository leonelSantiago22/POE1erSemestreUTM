#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void shuffle(int [][13]);
void deal(const int[][13],  char *[],  char*[]);
int pares=0;
int main()
{
    srand(time(NULL));
    char *suit[4]={"Corazones", "Diamantes", "Trebol", "Espadas"};
    char *face[13]={"AS", "Dos", "Tres", "Cuatro","Cinco", "Seis", "Siete", "Ocho"
                    ,"Nueve", "Diez", "Jack", "Reyna", "Rey"};

    int deck[4][13]= {0};

    shuffle(deck);
    deal(deck, face, suit);
    printf("\nUsted tiene %d pares", pares);
    return 0;
}

void shuffle(int wDeck[][13])
{
    int card, row, column;

    for (card  = 1; card <= 52; card++)
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

void deal(const int wDeck[][13],  char *wFace[],  char *wSuit[])
{
    int card, row, column;

    for ( card = 1; card <= 5; card++)
    {
        for ( row = 0; row<=4; row++)
        {
            for ( column = 0; column <= 13; column++)
            {
                if (wDeck[row][column]==card)
                {
                    printf("\n%5s de  %s", wFace[column], wSuit[row] );
                }
                if (2==wDeck[card][row])
                {
                    pares++;
                }
                
            }
            
        }
        
    }
    
}