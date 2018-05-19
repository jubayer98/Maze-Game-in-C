//maze puzzle

#include <stdio.h>
#define ROW 6 //define number of rows
#define COL 6 //define number of columns

int solveMaze(int maze[][COL], int startX, int startY, int exitX, int exitY); //function with parameters and type

int main(void)
{
    int startX, startY, exitX, exitY, maze[ROW][COL], f_solveMaze; //define different variables for maze puzzle
    char option;

    printf("\t\t\t========================\n");
    printf("\t\t\t %c %c %c MAZE GAME  %c %c %c \n", 178, 178, 178, 178, 178, 178);
    printf("\t\t\t========================\n\n");
    printf(">> What do you want? Chose from the below options.\n\n");
    printf("1. I want to PLAY!\n2. I QUIT!\n\n");
    printf("Press <P> to play or press <Q> to QUIT\n\n:>> ");

    scanf("%c", &option); //take input from user for playing or not

    if(option == 'P' || option == 'p')
    {
        f_solveMaze = solveMaze(maze, startX, startY, exitX, exitY); //call the sub-function
    }
    else if(option == 'Q' || option == 'q')
    {
        printf("\n\nYou are a GREAT LOSER!!!\n\n");
    }
    else
    {
        printf("\n\nInvalid option is chosen. Please try again. Thank You!\n\n");
    }

    return 0;
}

int solveMaze(int maze[][COL], int startX, int startY, int exitX, int exitY) //sub-function
{
    char keyword;

    printf("\t\t\t\tWELCOME\n\n");
    printf("INSTRUCTION:\nDear User,Look At Following Puzzle.\nYour CURRENT Point Is (0,0) And GOAL Point Is (5,5).\nYou Should Find A Way Using D=Down,U=Up,L=Left,R=Right Key To Reach Your GOAL.\nAnd In This Puzzle Where 0 Represents The WALL And 1 Represents Your PATH.\n\n");
    printf("\t\t\t==========================\n");
    printf("\t\t\t %c %c %c LET'S START  %c %c %c \n", 278, 278, 278, 278, 278, 278);
    printf("\t\t\t==========================\n\n");

    for(startX=0; startX<6; startX++) //using loop for making 6x6 matrix for puzzle
    {
        for(startY=0; startY<6; startY++)
        {
            maze[startX][startY] = 1; //where 1 representing path in puzzle
        }
    }

maze[0][3]=maze[0][4]=maze[0][5]=maze[1][1]=maze[1][2]=maze[2][2]=maze[2][4]=maze[3][4]=maze[4][0]=maze[4][2]=maze[4][4]=maze[5][0]=maze[5][2]=maze[5][4]=0; //where 0 representing wall in puzzle

    for(startX=0; startX<6; startX++)
    {
        for(startY=0; startY<6; startY++)
        {
            printf("%d\t", maze[startX][startY]);
        }
        printf("\n");
    }

    startX=0; //starting x point declared
    startY=0; //starting y point declared

    while(maze[startX][startY] = 1)
    {
        scanf("%c", &keyword);
        printf("Your Current Position is (%d, %d)\n", startX, startY);
        scanf("%c", &keyword);

        if(keyword=='d' || keyword=='D')
        {
            startX++;
        }
        if(keyword=='u' || keyword=='U')
        {
            startX--;
        }
        if(keyword=='r' || keyword=='R')
        {
            startY++;
        }
        if(keyword=='l' || keyword=='L')
        {
            startY--;
        }

        if(maze[startX][startY]==0)
        {
            printf("\nYour Current Position is (%d, %d)\n\n", startX, startY);
            printf("\nGAME OVER! You are LOST!\n\n");
            break;
        }

        if(startX==5 && startY==5)
        {
            printf("Your Current Position is (%d, %d)\n\n", startX, startY);
            printf("\nYOU WIN! Congratulation!\n\n");
            break;
        }
    }
}
