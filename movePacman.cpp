#include<iostream>
#include<windows.h>

using namespace std;

void printMaze();
void gotoxy(int x , int y);
void printPacman(int x , int y);
void erasePacman(int x , int y);
char getCharAtxy(short int x, short int y);


main()
{
	system("cls");
	int x = 4;
	int y = 1;
	char nextLocation;
	bool gameRunning = true;
	printMaze();
	gotoxy(x,y);
	cout << "P";
	
	while(gameRunning)
	{
		if(GetAsyncKeyState(VK_LEFT))
		{
			nextLocation = getCharAtxy(x-1 , y);
 			if (nextLocation == ' ')
			{
				erasePacman(x,y);
				x = x - 1;
				printPacman(x,y);
			}	
		}
		if(GetAsyncKeyState(VK_RIGHT))
		{
			nextLocation = getCharAtxy(x+1 , y);
 			if (nextLocation == ' ')
			{
				erasePacman(x,y);
				x = x + 1;
				printPacman(x,y);
			}			
		}
		if(GetAsyncKeyState(VK_UP))
		{
			nextLocation = getCharAtxy(x , y-1);
 			if (nextLocation == ' ')
			{
				erasePacman(x,y);
				y = y - 1;
				printPacman(x,y);
			}
		}
		if(GetAsyncKeyState(VK_DOWN))
		{
			nextLocation = getCharAtxy(x , y+1);
 			if (nextLocation == ' ')
			{
				erasePacman(x,y);
				y = y + 1;
				printPacman(x,y);
			}
		}
		if(GetAsyncKeyState(VK_ESCAPE))
		{
			gameRunning = false;
		}
		Sleep(200);
	}
	
}


void printMaze()
{
cout<< "######################################################################    " <<endl;
cout<< "||..  ....................................................  ......  ||    " <<endl;
cout<< "||..  %%%%%%%%%%%%%%%%       ...     %%%%%%%%%%%%%%  |%|..   %%%%   ||    " <<endl;
cout<< "||..         |%|   |%|    |%|...     |%|        |%|  |%|..    |%|   ||    " <<endl;
cout<< "||..         |%|   |%|    |%|...     |%|        |%|  |%|..    |%|   ||    " <<endl;
cout<< "||..         %%%%%%%% . . |%|...     %%%%%%%%%%%%%%     ..   %%%%.  ||    " <<endl;
cout<< "||..         |%|      . . |%|...    ............... |%| ..       .  ||    " <<endl;
cout<< "||..         %%%%%%%%%. . |%|...    %%%%%%%%%%%%    |%| ..   %%%%.  ||    " <<endl;
cout<< "||..               |%|.             |%|......       |%| ..    |%|.  ||    " <<endl;
cout<< "||..     ......... |%|.             |%|......|%|        ..    |%|.  ||    " <<endl;
cout<< "||..|%|  |%|%%%|%|.|%|. |%|            ......|%|        ..|%| |%|.  ||    " <<endl;
cout<< "||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|         .|%|.      ||    " <<endl;
cout<< "||..|%|  |%|   |%|..           ...|%|     %%%%%%        . |%|.      ||    " <<endl;
cout<< "||..|%|            .           ...|%|               |%| ..|%|.      ||    " <<endl;
cout<< "||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||    " <<endl;
cout<< "||...............................................   |%| ..........  ||    " <<endl;
cout<< "||   ............................................          .......  ||    " <<endl;
cout<< "||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|    |%| ..|%|.      ||    " <<endl;
cout<< "||..|%|  |%|   |%|..           ...|%|     %%%%%%    |%| ..|%|.      ||    " <<endl;
cout<< "||..|%|            .     G     ...|%|               |%| ..|%|.      ||    " <<endl;
cout<< "||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||    " <<endl;
cout<< "||..............................................      |%| ..........||    " <<endl;
cout<< "||  ............................................             .......||    " <<endl;
cout<< "######################################################################    " <<endl;
}

void gotoxy(int x , int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void printPacman(int x , int y)
{
	gotoxy(x,y);
	cout << "P";
}

void erasePacman(int x , int y)
{
	gotoxy(x,y);
	cout << " ";
}

char getCharAtxy(short int x, short int y)
{
 CHAR_INFO ci;
 COORD xy = {0, 0};
 SMALL_RECT rect = {x, y, x, y};
 COORD coordBufSize;
 coordBufSize.X = 1;
 coordBufSize.Y = 1;
 return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar: ' ';
}












