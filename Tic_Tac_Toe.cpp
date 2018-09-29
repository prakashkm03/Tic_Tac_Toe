#include <iostream>
using namespace std;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
/*******************************************************************
     FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
********************************************************************/
void board()
{

	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     ||     ||     " << endl;
    cout << "  " << square[1] << "  ||  " << square[2] << "  ||  " << square[3] << endl;
    cout << "=====||=====||=====" << endl;
    cout << "     ||     ||     " << endl;
    cout << "  " << square[4] << "  ||  " <<square[5] << "  ||  " <<square[6] << endl;
    cout << "=====||=====||=====" << endl;
    cout << "     ||     ||     " << endl;
    cout << "  " <<square[7] << "  ||  " <<square[8] << "  ||  " <<square[9] << endl;
    cout << "     ||     ||     " << endl << endl;

}
/***************************
-1 : Game in progress.
 0 : Game over. No result.
 1 : Game over. with result.
******************************/
int checkwin()
{
	if (square[1] == square[2] && square[2] == square[3])

		return 1;
	else if (square[4] == square[5] && square[5] == square[6])

		return 1;
	else if (square[7] == square[8] && square[8] == square[9])

		return 1;
	else if (square[1] == square[4] && square[4] == square[7])

		return 1;
	else if (square[2] == square[5] && square[5] == square[8])

		return 1;
	else if (square[3] == square[6] && square[6] == square[9])

		return 1;
	else if (square[1] == square[5] && square[5] == square[9])

		return 1;
	else if (square[3] == square[5] && square[5] == square[7])

		return 1;

    else
    {
        bool done = true;
///check if there is a tie i.e no one wins i.e all boxes are full of x or o
        for (int i=1;i<9;i++)
        {
            if (i==(int)square[i]-'0')
            {
            done = false;
            break;
            }
        }

       if (done) return 0;
     }

return -1;

}
/**Driver Function**/
int main()
{
    bool play_again = true;
    int yes_or_no = 0;
    bool flag=1;
    while (play_again == true)
  {
	int player = 1,i,choice;
    char mark;
	do
	{
	    if(flag==0)
        {
            cout<<endl<<"---------------It was an Invalid Move !!"<<" "<<"Play Again!!-------------------"<<endl;
        }
        flag=1;
		board();
		player=(player%2)?1:2;

		cout << "Player " << player << ", Enter a number:  ";
		cin >> choice;
		mark=(player == 1) ? 'X' : 'O';
		if (choice == 1 && square[1] == '1')

			square[1] = mark;
		else if (choice == 2 && square[2] == '2')

			square[2] = mark;
		else if (choice == 3 && square[3] == '3')

			square[3] = mark;
		else if (choice == 4 && square[4] == '4')

			square[4] = mark;
		else if (choice == 5 && square[5] == '5')

			square[5] = mark;
		else if (choice == 6 && square[6] == '6')

			square[6] = mark;
		else if (choice == 7 && square[7] == '7')

			square[7] = mark;
		else if (choice == 8 && square[8] == '8')

			square[8] = mark;
		else if (choice == 9 && square[9] == '9')

			square[9] = mark;
		else
		{
			flag=0;
			player--;
		}
		i=checkwin();

		player++;
	}while(i==-1);

	board();
	if(i==1) cout<<"==========================>\aPlayer "<<--player<<" wins!!!!<============================="<<endl<<endl;
	else cout<<"===========================>\aGame Draw!!"<<"<==========================";

    cout <<endl<<" Another game? Press 1 for yes or press 2 for no" << endl<<endl;
    cout<<" Your Choice:: ";
    cin >> yes_or_no;
    if (yes_or_no == 2)
    {
        play_again = false;
    }
    ///Resetting the game
    square[1] = '1';
    square[2] = '2';
    square[3] = '3';
    square[4] = '4';
    square[5] = '5';
    square[6] = '6';
    square[7] = '7';
    square[8] = '8';
    square[9] = '9';
 }
    cout << "=============================>>Thanks for playing!!<<==================================" << endl;
    return 0;
}



