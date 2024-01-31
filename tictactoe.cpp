#include<iostream>
#include<Windows.h>
#include<ctime>
#include<cstdlib>
using namespace std;
char C[3][3] = { '1','2','3','4','5','6','7','8','9' };
char player = 'X';
int n = 0;
void credits(){
	cout << " Credits of this Game Goes to Zakwan AKA Z_A_K_U." << endl;
	cout << "21F-9301_BCS-1A" << endl;
	cout << "FAST-NUCES CFD-Campus" << endl;
}
void rules() {
	cout << "One Player can Enter box one times after second player" << endl;
	cout << "_______________________________________________________________________________" << endl;
	cout << "If any row  wise, Column Wise or Diagonally Strikes First . Player Will Won. " << endl;
	cout << "_______________________________________________________________________________" << endl;
	cout << "Each win will Get you 1 Point" << endl;
	cout << "_______________________________________________________________________________" << endl;
	cout << " Best of Luck" << endl;
	cout << "_______________________________________________________________________________" << endl;
	Sleep(5000);
}
void mainBoard() {
	system("cls");
	cout << "Tic Tac Toe." << endl;
	cout << "\tTic Tac Toe " << endl;
	cout << "\tPlayer 1 [X]" << endl;
	cout << "\tPlayer 2 [0]" << endl;
	cout <<"\t"<< "    |    |    " << endl;
	cout <<"\t"<< C[0][0]<<"   | "<< C[0][1]<<"  | "<< C[0][2]<<"    " << endl;
	cout <<"\t"<< "____|____|____" << endl;
	cout <<"\t"<< "    |    |    " << endl;
	cout <<"\t"<< C[1][0]<< "   | "<< C[1][1]<< "  | "<<C[1][2]<<"    " << endl;
	cout <<"\t"<< "____|____|____" << endl;
	cout <<"\t"<< "    |    |    " << endl;
	cout <<"\t"<< C[2][0]<< "   | "<< C[2][1]<<"  | "<< C[2][2]<<"    " << endl;
	cout <<"\t"<< "    |    |    " << endl;

}

void computerInput()
{
	srand(time(0));
	int input;
	bool reserved = true;
	do {
		input = (rand() % 9) + 1;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (C[i][j] == 'X' || C[i][j] == 'O')
				{
					reserved = true;
				}
				else
				{
					reserved = false;
					break;
				}
			}
		}
		
	} while (reserved);

}
void userInputs() {
	int x;
	cout << "Its " << player << " Turn." "Enter Box Number : " << endl;
	cin >> x;


	if (x == 1)
	{
		if (C[0][0] == '1')
			C[0][0] = player;
		else {
			cout << "Box is already Chosen. Try Again" << endl;
			userInputs();
		}
	}
	else if (x == 2) {
		if(C[0][1]== '2')
			C[0][1] = player;
		else
		{
			cout << "Box is already Chosen. Try Again" << endl;
			userInputs();
		}
	}

	
	else if (x == 3) {
		if(C[0][2]== '3')
			C[0][2] = player;
		else 
		{
			cout << "Box is already Chosen. Try Again" << endl;
			userInputs();
		}
	}
	else if (x == 4) {
	if (C[1][0] == '4')
		C[1][0] = player;
	else
	{
		cout << "Box is already Chosen. Try Again" << endl;
		userInputs();
	}
	}
	else if (x == 5) {
		if(C[1][1] == '5')
			C[1][1] = player;
		else
		{
			cout << "Box is already Chosen. Try Again" << endl;
			userInputs();
		}
	}
	else if (x == 6) {
		if(C[1][2]== '6')
			C[1][2] = player;
		else {
			cout << "Box is already Chosen. Try Again" << endl;
			userInputs();
		}
	}
	else if (x == 7) {
		if(C[2][0] == '7')
			C[2][0] = player;
		else
		{
			cout << "Box is already Chosen. Try Again" << endl;
			userInputs();
		}
	}
	else if (x == 8) {
		if(C[2][1] == '8')
			C[2][1] = player;
		else
		{
			cout << "Box is already Chosen. Try Again" << endl;
			userInputs();
		}
	}
	else if (x == 9) {
		if(C[2][2] == '9')
			C[2][2] = player;
		else
		{
			cout << "Box is already Chosen. Try Again" << endl;
			userInputs();
		}
	}
	}
int toss()
{
	srand(time(0));
	int x;                 //tossing for first player taker
	x = (rand() % 2) + 1;
	if (x == 1)
		return 1;
	else
		return 2;
}

void checkPlayer() {
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}
char winCondition() {
	for (int i = 0; i < 3; i++) {
		if (C[i][0] == 'X' && C[i][1] == 'X' && C[i][2] == 'X')  //rows checking
		{
			return 'X';
		}
	}
	 
	for (int i = 0; i < 3; i++)                                   //column checking
	{
		if (C[0][i] == 'X' && C[1][i] == 'X' && C[2][i] == 'X')
		{
			return 'X';
		}
	}


	if (C[0][0] == 'X' && C[1][1] == 'X' && C[2][2] == 'X')   // Diagnol Checking
	{
		return 'X';
	}
	if (C[0][2] == 'X' && C[1][1] == 'X' && C[2][0] == 'X')
	{
		return 'X';
	}
	

	  //Player O Conditions

	for (int i = 0; i < 3; i++) {
		if (C[i][0] == 'O' && C[i][1] == 'O' && C[i][2] == 'O')  //rows checking
		{
			return 'O';
		}
	}

	for (int i = 0; i < 3; i++)                                   //column checking
	{
		if (C[0][i] == 'O' && C[1][i] == 'O' && C[2][i] == 'O')
		{
			return 'O';
		}
	}

	if (C[0][0] == 'O' && C[1][1] == 'O' && C[2][2] == 'O')   // Diagnol Checking
	{
		return 'O';
	}
	if (C[0][2] == 'O' && C[1][1] == 'O' && C[2][0] == 'O')
	{
		return 'O';
	}
	return '/';

}
int main() {
	system("Color 70");
	char ch;
	int scoreX = 0, scoreO = 0, select;
	cout << "Press 1 to see credits.\nPress 2 to See instructions\nPRESS 3 TO PLAY GAME" << endl;
	cin >> select;
	switch (select) {
	case 1:
		credits();
		break;
	case 2:
		rules();
		break;
	case 3:
		break;
	default:
		break;
	}
	mainBoard();
	while (1) {
		n++;
		userInputs();
		mainBoard();  //Updating Main Board
		if (winCondition() == 'X')
		{
			cout << "Player [X] Won the Match" << endl;
			scoreX++;
			cout << "PRESS Y/y TO PLAY AGAIN." << endl;
			cin >> ch;
			if (ch == 'Y' or ch == 'y')
			{
				int a = '1';
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++) {
						C[i][j] = a;
						a++;
					}
				}
				mainBoard();
				n = 0;
				continue;
			}
			else 
			{
				break;
			}

		}
		else if (winCondition() == 'O')
		{
			cout << "Player [O] Won the Match" << endl;
			scoreO++;
			cout << "Press Y/y to Play Again." << endl;
			cin >> ch;
			if (ch == 'Y' or ch == 'y')
			{
				int a = '1';
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++) {
						C[i][j] = a;
						a++;
					}
				}
				n = 0;
				mainBoard();
				continue;
			}
			else {
				break;
			}

		}
		else if (winCondition() == '/' && n == 9)
		{
			cout << "Match Drawed. No Player Wins!" << endl;
			cout << "Press Y/y to Play Again." << endl;
			cin >> ch;
			if (ch == 'Y' or ch == 'y')
			{
				int a = '1';
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++) {
						C[i][j] = a;
						a++;
					}
				}
				n = 0;
				mainBoard();
				continue;
			}
			else {
				break;
			}
		}
		checkPlayer();

	}
	cout << "Player X score is : " << scoreX << endl;
	cout << "Player O score is : " << scoreO << endl;
	system("pause");
	return 0;
}
