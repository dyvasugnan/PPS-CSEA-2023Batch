#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
  
int i,j,height=20,width=20; 
int gameover,score; 
int x,y,fruitx,fruity; 

void setup(){ 
    gameover = 0; 
    x = height/2; 
    y = width/2; 
    int positionfruitx,positionfruity;
    positionfruitx: 
        fruitx = rand() % 20; 
        if (fruitx == 0 || fruitx == 19) 
            goto positionfruitx; 
    positionfruity: 
        fruity = rand() % 20; 
        if (fruity == 0 || fruity == 19) 
            goto positionfruity; 
    score = 0; 
} 

void draw(){ 
    for (i = 0; i < height; i++) { 
        for (j = 0; j < width; j++) { 
            if (i == 0 || i == width - 1 || j == 0 || j == height - 1){ 
                printf("#"); 
            } 
            else { 
                if (i == x && j == y) 
                    printf("0"); 
                else if (i == fruitx && j == fruity) 
                    printf("*"); 
                else
                    printf(" "); 
            } 
        } 
        printf("\n"); 
    } 
    printf("score = %d", score); 
    printf("\n"); 
    printf("press X to quit the game: \n"); 
} 

void input() 
{ 
        switch (getchar()) { 
        case 'a': 
            y-=1;  
            break; 
        case 's': 
            x+=1; 
            break; 
        case 'd': 
            y+=1; 
            break; 
        case 'w': 
            x-=1; 
            break; 
        case 'x':
            printf("Thank you for playing the game!!!!");
            gameover = 1; 
            break; 
        } 
} 

void logic(){ 
    int positionfruitx,positionfruity;
    //if game is over 
    if (x<0 || x>height || y<0 || y>width ) 
        gameover=1; 
    //update score 
    if (x == fruitx && y == fruity) { 
    positionfruitx: 
        fruitx = rand() % 20; 
        if (fruitx == 0) 
            goto positionfruitx; 
    //generating new fruit 
    positionfruity: 
        fruity = rand() % 20; 
        if (fruity == 0) 
            goto positionfruity; 
        score += 100; 
    } 
} 
void instructions(){
  printf("RULES\n");
	printf("press 'a' to move left\n");
	printf("press 'd' to move right\n");
	printf("press 'w' to move up\n");
	printf("press 's' to move down\n");
}

void main(){ 
    printf("\t\t\t...SNAKE GAME...\n\n");
    instructions();
    setup(); 
    while (gameover!=1) { 
        draw(); 
        input(); 
        logic(); 
    } 
}
