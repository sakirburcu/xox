#include <stdio.h>

char h[9];
int a, b;
int sira =0;
int arraySize = sizeof(h)/sizeof(h[0]);

void print_table()
{
    printf("\t    X  O  X \n\n");


    printf("\t  1  |  2  |  3  \n");
    printf("\t--------------\n");
    printf("\t  4  |  5  |  6  \n");
    printf("\t--------------\n");
    printf("\t  7  |  8  |  9  \n");
}


void make_move()
{

    if(sira%2 == 0)
    {

    printf("Move for player 1 (1-9): ");
    scanf("%d", &a);

    h[a-1]= 'x';


    printf("\t %c  | %c  | %c  \n", h[0],h[1],h[2]);
    printf("\t--------------\n");
    printf("\t %c  | %c  | %c  \n", h[3],h[4],h[5]);
    printf("\t--------------\n");
    printf("\t %c  | %c  | %c  \n", h[6],h[7],h[8]);
    ++sira;

    


    }

    else
    {

    printf("Move for player 2 (1-9): ");
    scanf("%d", &b);
    if(b<1 || b>9)
    {
        printf("\nYou logged invalid number.");
    }

    h[b-1]= 'o';


    printf("\t %c  | %c  | %c  \n", h[0],h[1],h[2]);
    printf("\t--------------\n");
    printf("\t %c  | %c  | %c  \n", h[3],h[4],h[5]);
    printf("\t--------------\n");
    printf("\t %c  | %c  | %c  \n", h[6],h[7],h[8]);
    ++sira;

    }
}

void get_winner()
{
    if(h[0]==h[1]==h[2]== 'x'){
        printf("\nWinner is player 1!");
    }

}



int main()
{
    print_table();
    while(sira<9)
    {
        make_move();
        get_winner();
    }

    return 0;
}

