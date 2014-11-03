#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "compatibility.h"

typedef struct _Position
{
    int x, y;
} Position;

typedef struct _Matrix
{
    int **matrix;
    int width;
    int height;
} Matrix;

void allocateMatrix(Matrix *a, int width, int height);
void freeMatrix(Matrix *a);
void fillMatrixWithValue(Matrix a, int value);
void drawMaze(Matrix maze, Matrix fog, Position hero, Position m);
void generateMaze(Matrix maze, Position *hero, Position *exit, Position *m);
void generateFog(Matrix fog, Position hero,Position m);
void runGame(Matrix maze, Matrix fog, Position exit, Position hero,Position m);

int main()
{

    srand(time(NULL));
    Matrix maze = {NULL, 0, 0};
    Matrix fog = {NULL, 0, 0};
    int width = 50, height = 40;
    Position hero, exit,m;


    allocateMatrix(&maze, width, height);
    allocateMatrix(&fog, width, height);

    generateMaze(maze, &hero, &exit,&m);
    generateFog(fog, hero,m);
    runGame(maze, fog, exit, hero,m);
    freeMatrix(&fog);
    freeMatrix(&maze);

    return 0;
}

void allocateMatrix(Matrix *a, int width, int height)
{
    a->matrix = (int **) malloc(height * sizeof(int *));

    for(int i = 0; i < height; ++i)
    {
        a->matrix[i] = NULL;
    }

    for(int i = 0; i < height; ++i)
    {
        a->matrix[i] = (int *) malloc(width * sizeof(int));
    }

    a->width = width;
    a->height = height;
}

void freeMatrix(Matrix *a)
{
    for(int i = 0; i < a->height; ++i)
    {
        free(a->matrix[i]);
        a->matrix[i] = NULL;
    }

    free(a->matrix);
    a->matrix = NULL;
}

void fillMatrixWithValue(Matrix a, int value)
{
    for(int i = 0; i < a.height; ++i)
    {
        for(int j = 0; j < a.width; ++j)
        {
            a.matrix[i][j] = value;
        }
    }
}


void drawMaze(Matrix maze, Matrix fog, Position hero , Position m)
{
    static char symbols [2][4] = {EMPTY_CELL, WALL_CELL};

    for(int i = 0; i < maze.height; ++i)
    {
        for(int j = 0; j < maze.width; ++j)
        {
            if(fog.matrix[i][j] == 1)
            {
                printf("%s", FOG_CELL);
            }
            else
            {
                if(j == hero.x && i == hero.y)
                {
                    printf("%s", HERO_CELL);
                }
                else
                {
                    printf("%s", symbols[maze.matrix[i][j]]);
                }
                if(j == m.x && i == m.y)
                {
                    printf("%s", M_CELL);
                }
                else
                {
                    printf("%s", symbols[maze.matrix[i][j]]);
                }
            }
        }

        printf("\n");
    }

    printf("\n\n");
}

void generateBorder(Matrix maze);
Position generateExit(int width, int height);
void generateWalls(Matrix maze, Position exit);
void generateHero(Matrix maze, Position *hero);
void generateM(Matrix maze,Position *m);
void generateMaze(Matrix maze, Position *hero, Position *exit,Position *m)
{
    fillMatrixWithValue(maze, 0);
    generateBorder(maze);

    *exit = generateExit(maze.width, maze.height);
    maze.matrix[exit->y][exit->x] = 0;

    generateWalls(maze, *exit);
    generateHero(maze, hero);
    generateM(maze,m);
}

void generateBorder(Matrix maze)
{
    for(int i = 0; i < maze.height; ++i)
    {
        maze.matrix[i][0] = 1;
        maze.matrix[i][maze.width - 1] = 1;
    }

    for(int i = 0; i < maze.width; ++i)
    {
        maze.matrix[0][i] = 1;
        maze.matrix[maze.height - 1][i] = 1;
    }
}

Position generateExit(int width, int height)
{
    int perimetr = 2 * (width - 2) + 2 * (height - 2);
    int randCell = rand() % perimetr;
    Position exit;

    if(randCell < width - 2)
    {
        exit.x = randCell + 1;
        exit.y = 0;
    }
    else if(randCell < 2 * (width - 2))
    {
        exit.x = randCell - width + 3;
        exit.y = height - 1;
    }
    else if(randCell < 2 * (width - 2) + height - 2)
    {
        exit.x = 0;
        exit.y = randCell - 2 * width + 5;
    }
    else
    {
        exit.x = width - 1;
        exit.y = randCell - 2 * width - height + 7;
    }

    return exit;
}

int isMazeImposible(Matrix maze, Position exit);

void generateWalls(Matrix maze, Position exit)
{
    int countOfWall = 3 * (maze.width - 2) * (maze.height - 2) / 7;

    for(int i = 0; i < countOfWall; ++i)
    {
        Position wall;
        int mustRepeat;

        do
        {
            do
            {
                wall.x = rand() % (maze.width - 2) + 1;
                wall.y = rand() % (maze.height - 2) + 1;
            }
            while(maze.matrix[wall.y][wall.x]);

            maze.matrix[wall.y][wall.x] = 1;
            mustRepeat = isMazeImposible(maze, exit);

            if(mustRepeat)
                maze.matrix[wall.y][wall.x] = 0;
        }
        while(mustRepeat);
    }
}

void dfs(Matrix maze, Matrix mark, int x, int y);

int isMazeImposible(Matrix maze, Position exit)
{
    Matrix mark;
    allocateMatrix(&mark, maze.width, maze.height);
    fillMatrixWithValue(mark, 0);
    dfs(maze, mark, exit.x, exit.y);

    for(int i = 0; i < maze.height; ++i)
        for(int j = 0; j < maze.width; ++j)
            if(maze.matrix[i][j] == 0 && mark.matrix[i][j] == 0)
            {
                freeMatrix(&mark);
                return 1;
            }

    freeMatrix(&mark);
    return 0;
}

void dfs(Matrix maze, Matrix mark, int x, int y)
{
    if(x < 0 || x >= maze.width || y < 0 || y >= maze.height)
        return;

    if(maze.matrix[y][x])
        return;

    if(mark.matrix[y][x])
        return;

    mark.matrix[y][x] = 1;

    dfs(maze, mark, x - 1, y);
    dfs(maze, mark, x + 1, y);
    dfs(maze, mark, x, y - 1);
    dfs(maze, mark, x, y + 1);
}

void generateHero(Matrix maze, Position *hero)
{
    int flag = 1;
    int x, y;

    do
    {
        x = rand() % (maze.width - 2) + 1;
        y = rand() % (maze.height - 2) + 1;
        flag = maze.matrix[y][x] != 0;
    }
    while(flag);

    hero->x = x;
    hero->y = y;
}
void generateM(Matrix maze, Position *m)
{
    int flag = 1;
    int x, y;

    do
    {
        x = rand() % (maze.width - 2) + 1;
        y = rand() % (maze.height - 2) + 1;
        flag = maze.matrix[y][x] != 0;
    }
    while(flag);

    m->x = x;
    m->y = y;
}
void generateFog(Matrix fog, Position hero,Position m)
{
    fillMatrixWithValue(fog, 0);
    fog.matrix[hero.y][hero.x] = 0;
    fog.matrix[m.y][m.x]=0;
}

typedef void (*Slot)(Position *, Position, Matrix, Position *);

void emptyCell(Position *hero, Position target, Matrix fog,Position *m)
{
    *hero = target ;
    fog.matrix[target.y][target.x] = 0;
    *m=target;
    fog.matrix[target.y][target.x] = 0;
}

void wallCell(Position *hero, Position target, Matrix fog,Position *m)
{
    fog.matrix[target.y][target.x] = 0;
}

void runGame(Matrix maze, Matrix fog, Position exit, Position hero,Position m)
{
    static Slot slot[2] = {emptyCell, wallCell};

    while(1)
    {
        clear();
        drawMaze(maze, fog, hero,m);

        if(exit.x == hero.x && exit.y == hero.y)
        {
            printf("\n\nYOU HAVE WON!!!!\n");
            return ;
        }
        if(m.x==hero.x && m.y==hero.y)
        {
            double hpHero=1000,hpM=1000;//,a;
            int randomchanceeasy,randomchancemid,randomchancehard;//,fight ;
            srand(time(NULL));
            randomchanceeasy=rand()%9;
            if (randomchanceeasy>0)
            {
                randomchanceeasy=1;
            }
            else
            {
                randomchanceeasy=0;
            }
            randomchancemid=rand()%4;
            if (randomchancemid>0)
            {
                randomchancemid=1;
            }
            else
            {
                randomchancemid=0;
            }
            randomchancehard=rand()%1;
            if (randomchancehard>0)
            {
                randomchancehard=1;
            }
            else
            {
                randomchancehard=0;
            }
            printf("(\\./)(-_-)(\\./) VS (-_-)");
            do
            {
                printf("mounster hp -  %f , your hp - %f\n",hpM,hpHero);
                printf("(\\./)(-_-)(\\./) VS (-_-)\n");
                printf("viberite tip otaki 1 , 2 ,3\n ");
                printf("vernaya otaka\n");
                printf("mb popadu , no urona pobolee budet\n ");
                printf("krit otaka, trudno popast' \n");
                int fight;
                scanf("%d",&fight);
                switch (fight)
                {
                case 1:
                    hpM= hpM- (1+rand()%2)*50*(randomchanceeasy);
                    hpHero=hpHero-150;
                    break;
                case 2:
                    hpM= hpM- (3+rand()%2)*50*(randomchancemid);
                    hpHero=hpHero-150;
                    break;
                case 3:
                    hpM= hpM- (4+rand()%4)*50*(randomchancehard);
                    hpHero=hpHero-150;
                    break;
                }
            }
            while ( hpHero > 0 || hpM > 0);
            if(hpHero>0)
            {
                printf("you win the fight !");
            }
            else
            {
                printf("you lost, try again next time !");
            }

        }


        return ;
    }

    Direction direction = getKey();
    Position target = hero;

    switch(direction)
    {
    case Up:
        --target.y;
        break;

    case Down:
        ++target.y;
        break;

    case Right:
        ++target.x;
        break;

    case Left:
        --target.x;
        break;

    case Mistake:
        break;

    default:
        assert(0);
    }

    slot[maze.matrix[target.y][target.x]](&hero, target, fog,&m);
}

