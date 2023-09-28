#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int a,b,c,d;

    // this is game is about guessing the number

    printf("\t \t \t \t-----------------------GUESS THE NUMBER------------------------\n");
    printf("\t \t \t \t-----------------------GUESS THE NUMBER------------------------\n");
    printf("\t \t \t \t-----------------------GUESS THE NUMBER------------------------\n");
    printf("\t \t \t \t-----------------------GUESS THE NUMBER------------------------\n \n \n");

    //choosing difficulty
    diffi:
    printf("\n \n \t \t \t \t-----------------------CHOOSE DIFFICULTY------------------------\n");
    printf("\t \t \t \t \t \t0 --NOOB-------------\n");
    printf("\t \t \t \t \t \t1 --EASY-------------\n");
    printf("\t \t \t \t \t \t2 --MEDIUM-----------\n");
    printf("\t \t \t \t \t \t3 --HARD-------------\n");
    printf("\t \t \t \t \t \t4 --EXTREME----------\n \n");

    printf("\t \t \t \t \t \tPLEASE CHOSE ONE:\t");
    scanf("%d",&a);

    if(a== 0){
        printf("\t \t \t \t \t \t\n \nYOU HAVE CHOSEN NOOB\n \n");
    }
    else if(a== 1){
        printf("\t \t \t \t \t \t\n \nYOU HAVE CHOSEN EASY\n \n");
    }
    else if(a == 2){
        printf("\t \t \t \t \t \t\n \nYOU HAVE CHOSEN MEDIUM\n");
    }
    else if(a == 3){
        printf("\t \t \t \t \t \t\n \nYOU HAVE CHOSEN HARD\n");
    }
    else if(a == 4){
        printf("\t \t \t \t \t \t\n \nYOU HAVE CHOSEN EXTREME\n");
    }
    else{
        printf("\t \t \t \t \t \t\n \nwrong input, try again\n");
        goto diffi;
    };

    //condition for the game starts here
    here:
     if(a==0){
        printf("\t \t \t \t \t \tGuess the number\n");
        printf("\t \t \t \t \t \tyou can only chose from 0 to 5\n");
        printf("\t \t \t \t \t \twhat is the number:\t");
        scanf("%d",&b);
    }
    else if(a==1){
        printf("\t \t \t \t \t \tGuess the number\n");
        printf("\t \t \t \t \t \tyou can only chose from 0 to 10\n");
        printf("\t \t \t \t \t \twhat is the number:\t");
        scanf("%d",&b);
    }

    else if(a==2){
        printf("\t \t \t \t \t \tGuess the number\n");
        printf("\t \t \t \t \t \tyou can only chose from 0 to 100\n");
        printf("\t \t \t \t \t \twhat is the number:\t");
        scanf("%d",&b);
    }
    else if(a==3){
        printf("\t \t \t \t \t \tGuess the number\n");
        printf("\t \t \t \t \t \tyou can only chose from 0 to 1000\n");
        printf("\t \t \t \t \t \twhat is the number:\t");
        scanf("%d",&b);
    }
    else if(a==4){
        printf("\t \t \t \t \t \tGuess the number\n");
        printf("\t \t \t \t \t \tyou can only chose from 0 to 10000\n");
        printf("\t \t \t \t \t \twhat is the number:\t");
        scanf("%d",&b);
    }
// for noob
if (a==0){
    srand((unsigned)time(NULL));

    for(int x = 1; x < 10; x++){
        int random = rand() % 6;
        printf("%d\n", random);

        if( b == random ){
            printf("\t \t \t \t \t \t\nyou guessed it correctly\n");
            printf("\t \t \t \t \t \tDo you want to play again?\n");
            printf("\t \t \t \t \t \t1 for yes\n");
            printf("\t \t \t \t \t \t2 for no\n");
            printf("\t \t \t \t \t \t3 to change difficulty\n");
            printf("\t \t \t \t \t \tinput value:\t");
            scanf("%d",&d);

            iaa:
                if(d==1){
                    printf("\t \t \t \t \t \t\nok lets go\n");
                    goto here;
                }
                else if(d==2){
                    printf("\t \t \t \t \t \tthanks for playing\n");
                    return 0;
                }
                else if(d==3){
                    printf("\t \t \t \t \t \tChange difficulty\n");
                    goto diffi;
                }
                else{
                    printf("\t \t \t \t \t \twrong input\n");
                    goto iaa;
                }
        }
        else{
            printf("\t \t \t \t \t \t\nyou did not get the value\n");
            printf("\t \t \t \t \t \tDo you want to play again?\n");
            printf("\t \t \t \t \t \t1 for yes\n");
            printf("\t \t \t \t \t \t2 for no\n");
            printf("\t \t \t \t \t \t3 to change difficulty\n");
            printf("\t \t \t \t \t \tinput value:\t");
            scanf("%d",&d);

            i0:
            if(d==1){
                    printf("\t \t \t \t \t \t\nok lets go\n");
                    goto here;
                }
                else if(d==2){
                    printf("\t \t \t \t \t \tthanks for playing\n");
                    return 0;
                }
                else if(d==3){
                    printf("\t \t \t \t \t \tto change difficulty\n");
                    goto diffi;
                }
                else{
                    printf("\t \t \t \t \t \twrong input\n");
                    goto i0;
                }
        }
    }
 }

 // for easy
 if (a==1){
    srand((unsigned)time(NULL));

    for(int x = 1; x < 10; x++){
        int random = rand() % 11;
        printf("%d", random);

        if( b == random ){
            printf("\t \t \t \t \t \t\nyou guessed it correctly\n");
            printf("\t \t \t \t \t \tDo you want to play again?\n");
            printf("\t \t \t \t \t \t1 for yes\n");
            printf("\t \t \t \t \t \t2 for no\n");
            printf("\t \t \t \t \t \t3 to change difficulty\n");
            printf("\t \t \t \t \t \tinput value:\t");
            scanf("%d",&d);

            ia:
                if(d==1){
                    printf("\t \t \t \t \t \t\nok lets go\n");
                    goto here;
                }
                else if(d==2){
                    printf("\t \t \t \t \t \tthanks for playing\n");
                    return 0;
                }
                else if(d==3){
                    printf("\t \t \t \t \t \tChange difficulty\n");
                    goto diffi;
                }
                else{
                    printf("\t \t \t \t \t \twrong input\n");
                    goto ia;
                }
        }
        else{
            printf("\t \t \t \t \t \t\nyou did not get the value\n");
            printf("\t \t \t \t \t \tDo you want to play again?\n");
            printf("\t \t \t \t \t \t1 for yes\n");
            printf("\t \t \t \t \t \t2 for no\n");
            printf("\t \t \t \t \t \t3 to change difficulty\n");
            printf("\t \t \t \t \t \tinput value:\t");
            scanf("%d",&d);

            i1:
            if(d==1){
                    printf("\t \t \t \t \t \t\nok lets go\n");
                    goto here;
                }
                else if(d==2){
                    printf("\t \t \t \t \t \tthanks for playing\n");
                    return 0;
                }
                else if(d==3){
                    printf("\t \t \t \t \t \tto change difficulty\n");
                    goto diffi;
                }
                else{
                    printf("\t \t \t \t \t \twrong input\n");
                    goto i1;
                }
        }
    }
 }

// for medium
     if (a==2){
    srand((unsigned)time(NULL));

    for(int x = 1; x < 10; x++){
        int random = rand() % 101;
        printf("%d", random);

        if( b == random ){
            printf("\t \t \t \t \t \t\nyou guessed it correctly\n");
            printf("\t \t \t \t \t \tDo you want to play again?\n");
            printf("\t \t \t \t \t \t1 for yes\n");
            printf("\t \t \t \t \t \t2 for no\n");
            printf("\t \t \t \t \t \t3 to change difficulty\n");
            printf("\t \t \t \t \t \tinput value:\t");
            scanf("%d",&d);

            ib:
                if(d==1){
                    printf("\t \t \t \t \t \t\nok lets go\n");
                    goto here;
                }
                else if(d==2){
                    printf("\t \t \t \t \t \tthanks for playing\n");
                    return 0;
                }
                else if(d==3){
                    printf("\t \t \t \t \t \tto change difficulty\n");
                    goto diffi;
                }
                else{
                    printf("\t \t \t \t \t \twrong input\n");
                    goto ib;
                }
        }
        else{
            printf("\t \t \t \t \t \t\nyou did not get the value\n");
            printf("\t \t \t \t \t \tDo you want to play again?\n");
            printf("\t \t \t \t \t \t1 for yes\n");
            printf("\t \t \t \t \t \t2 for no\n");
            printf("\t \t \t \t \t \t3 to change difficulty\n");
            printf("\t \t \t \t \t \tinput value:\t");
            scanf("%d",&d);

            i2:
            if(d==1){
                    printf("\t \t \t \t \t \t\nok lets go\n");
                    goto here;
                }
                else if(d==2){
                    printf("\t \t \t \t \t \tthanks for playing\n");
                    return 0;
                }
                else if(d==3){
                    printf("\t \t \t \t \t \tto change difficulty\n");
                    goto diffi;
                }
                else{
                    printf("\t \t \t \t \t \twrong input\n");
                    goto i2;
                }
        }
    }
 }


// for hard
     if (a==3){
    srand((unsigned)time(NULL));

    for(int x = 1; x < 10; x++){
        int random = rand() % 1001;
        printf("%d", random);

        if( b == random ){
            printf("\t \t \t \t \t \t\nyou guessed it correctly\n");
            printf("\t \t \t \t \t \tDo you want to play again?\n");
            printf("\t \t \t \t \t \t1 for yes\n");
            printf("\t \t \t \t \t \t2 for no\n");
            printf("\t \t \t \t \t \t3 to change difficulty\n");
            printf("\t \t \t \t \t \tinput value:\t");
            scanf("%d",&d);

            ic:
                if(d==1){
                    printf("\t \t \t \t \t \t\nok lets go\n");
                    goto here;
                }
                else if(d==2){
                    printf("\t \t \t \t \t \tthanks for playing\n");
                    return 0;
                }
                else if(d==3){
                    printf("\t \t \t \t \t \tto change difficulty\n");
                    goto diffi;
                }
                else{
                    printf("\t \t \t \t \t \twrong input\n");
                    goto ic;
                }
        }
        else{
            printf("\t \t \t \t \t \t\nyou did not get the value\n");
            printf("\t \t \t \t \t \tDo you want to play again?\n");
            printf("\t \t \t \t \t \t1 for yes\n");
            printf("\t \t \t \t \t \t2 for no\n");
            printf("\t \t \t \t \t \t3 to change difficulty\n");
            printf("\t \t \t \t \t \tinput value:\t");
            scanf("%d",&d);

            i3:
            if(d==1){
                    printf("\t \t \t \t \t \t\nok lets go\n");
                    goto here;
                }
                else if(d==2){
                    printf("\t \t \t \t \t \tthanks for playing\n");
                    return 0;
                }
                else if(d==3){
                    printf("\t \t \t \t \t \tto change difficulty\n");
                    goto diffi;
                }
                else{
                    printf("\t \t \t \t \t \twrong input\n");
                    goto i3;
                }
        }
    }
 }

// for extreme
     if (a==4){
    srand((unsigned)time(NULL));

    for(int x = 1; x < 10; x++){
        int random = rand() % 10001;
        printf("%d", random);

        if( b == random ){
            printf("\t \t \t \t \t \t\nyou guessed it correctly\n");
            printf("\t \t \t \t \t \tDo you want to play again?\n");
            printf("\t \t \t \t \t \t1 for yes\n");
            printf("\t \t \t \t \t \t2 for no\n");
            printf("\t \t \t \t \t \t3 to change difficulty\n");
            printf("\t \t \t \t \t \tinput value:\t");
            scanf("%d",&d);

            id:
                if(d==1){
                    printf("\t \t \t \t \t \t\nok lets go\n");
                    goto here;
                }
                else if(d==2){
                    printf("\t \t \t \t \t \tthanks for playing\n");
                    return 0;
                }
                else if(d==3){
                    printf("\t \t \t \t \t \tto change difficulty\n");
                    goto diffi;
                }
                else{
                    printf("\t \t \t \t \t \twrong input\n");
                    goto id;
                }
        }
        else{
            printf("\t \t \t \t \t \t\nyou did not get the value\n");
            printf("\t \t \t \t \t \tDo you want to play again?\n");
            printf("\t \t \t \t \t \t1 for yes\n");
            printf("\t \t \t \t \t \t2 for no\n");
            printf("\t \t \t \t \t \t3 to change difficulty\n");
            printf("\t \t \t \t \t \tinput value:\t");
            scanf("%d",&d);

            i4:
            if(d==1){
                    printf("\t \t \t \t \t \t\nok lets go\n");
                    goto here;
                }
                else if(d==2){
                    printf("\t \t \t \t \t \tthanks for playing\n");
                    return 0;
                }
                else if(d==3){
                    printf("\t \t \t \t \t \tto change difficulty\n");
                    goto diffi;
                }
                else{
                    printf("\t \t \t \t \t \twrong input\n");
                    goto i4;
                }
        }
    }
 }

    return 0;
}

