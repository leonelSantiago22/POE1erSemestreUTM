#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define suits 4
#define faces 13
void shuffle (int deck[][13]);
void deal(const int deck[][13],  char *[],  char *[]);

int main(){
    char *suit[4]={"Corazones", "Diamantes", "Clubs", "Espadas"};
    char *face[13]={"AS", "dos", "tres", "cuatro","cinco", "Seis", "Siete", "ocho"
                    ,"nueve", "diez", "Jack", "Reyna", "Rey"};
    int deck[4][13]={0};
    
    srand(time(NULL));

    shuffle(deck);
    deal(deck, face, suit);

 return 0;                   
}

void shuffle (int deck[][13])
{
    int card, row, column;

    for ( card = 1; card <= 52; card)
    {
        row = rand() % 4;
        column = rand() % 13;
        while (deck[row][column]!= 0)
        {
            row = rand() % 4;
            column = rand() % 13;
        }
      deck[row][column] = card;  
        
    }
}

void deal(const int deck[][13],  char *face[],  char *suit[])
{
    int card, row, column;
    for ( card = 1; card <= 52; card)
    {
        for ( row = 0; row <= 3; row++)
        {
             for ( column = 0; column <= 12; column++)
             {
                if (deck[row][column]==card)
                {
                    printf("\n%s of %s%c", face[column], suit[row], card%2==0);
                }
                
             }
             
        }
        
    }
    
}