//This program implements the game of Tic-Tac-Toe where you can play against the computer. Player 1 is the user, and player 2 is the computer.
#include<stdio.h>
#include <stdlib.h>
#define SIZE 3
void display_table(char board[SIZE][SIZE]);
void clear_table(char board[SIZE][SIZE]);
int check_table_full(char board[SIZE][SIZE]);
void update_table(char board[SIZE][SIZE], int row, int col, char play1move);
int check_legal_option(char board[SIZE][SIZE], int row, int col);
void generate_player2_move(char board[SIZE][SIZE], int row, int col);
int check_three_in_a_row(char board[SIZE][SIZE]);
int check_end_of_game(char board[SIZE][SIZE]);
void get_player1_move(char board[SIZE][SIZE], int row, int col);
void print_winner(char board[SIZE][SIZE]);

int main(void)
{

	//Declare the tic-tac-toe board
	char board[SIZE][SIZE];
	
	//The row and column of the move for either player 1 or 2
	int row, col;
	
	//Clear the table
	clear_table(board);

	//Display the table
	display_table(board);
	
	do
	{
		//Have player 1 enter their move
		get_player1_move(board, row, col);
	
		//Generate player 2 move
		generate_player2_move(board, row, col);

	//Do this while the game hasn't ended
	}while(check_end_of_game(board)==0);

	//After the game is over, print who won
	print_winner(board);
	return 0;
}
//Used to display the table.
void display_table(char board[SIZE][SIZE]){
char play1move='O', play2move='X', emptyspot='_';
printf("The current state of the game is:\n");
for(int row=0;row<SIZE;row++){
	for(int col=0;col<SIZE;col++){
	printf("%c ", board[row][col]);
	}
printf("\n");
}
return;
}
//Clears the table, or sets all spaces to underscore.
void clear_table(char board[SIZE][SIZE]){
char emptyspot='_';
for(int row=0;row<SIZE;row++){
	for(int col=0;col<SIZE;col++){
	board[row][col]=emptyspot;
	}
}
return;
}
//Checks if table is full. If full, then returns 1.
int check_table_full(char board[SIZE][SIZE]){
int check=1;
for(int row=0;row<SIZE;row++){
	for(int col=0;col<SIZE;col++){
		if(board[row][col]=='_'){
		check=0;
	}
	}
}
return check;
}
//Updates table with X or O.
void update_table(char board[SIZE][SIZE], int row, int col, char play1move){
board[row][col]=play1move;
return;
}
//Checks if moves are legal.
int check_legal_option(char board[SIZE][SIZE], int row, int col){
if(row>SIZE||col>SIZE||board[row][col]=='O'||board[row][col]=='X'){
return 0;
}
else{
return 1;
}
}
//Generates random move using stdlib.h and rand().
void generate_player2_move(char board[SIZE][SIZE], int row, int col){
char play1move='O', play2move='X', emptyspot='_';
row=4;
col=4;
while(!check_legal_option(board, row, col)&&!check_table_full(board)&&!check_three_in_a_row(board)){
row=rand()%3;
col=rand()%3;
}

printf("Player 2 has entered [row, col]: %d, %d\n",row, col);
update_table(board, row, col, 'X');
display_table(board);
return;
}
//Checks if there will be a winner in table.
int check_three_in_a_row(char board[SIZE][SIZE]){
//Player 1 options.
//Options for winning horizontally.
if(board[0][0]=='O'&&board[0][1]=='O'&&board[0][2]=='O'){
return 1;
}
else if(board[1][0]=='O'&&board[1][1]=='O'&&board[1][2]=='O'){
return 1;
}
else if(board[2][0]=='O'&&board[2][1]=='O'&&board[2][2]=='O'){
return 1;
}
//Options for winning vertically.
else if(board[0][0]=='O'&&board[1][0]=='O'&&board[2][0]=='O'){
return 1;
}
else if(board[0][1]=='O'&&board[1][1]=='O'&&board[2][1]=='O'){
return 1;
}
else if(board[0][2]=='O'&&board[1][2]=='O'&&board[2][2]=='O'){
return 1;
}
//Options for winning diagonally.
else if(board[0][0]=='O'&&board[1][1]=='O'&&board[2][2]=='O'){
return 1;
}
else if(board[0][2]=='O'&&board[1][1]=='O'&&board[2][0]=='O'){
return 1;
}

//Player 2 options.
//Options for winning horizontally.
if(board[0][0]=='X'&&board[0][1]=='X'&&board[0][2]=='X'){
return 2;
}
else if(board[1][0]=='X'&&board[1][1]=='X'&&board[1][2]=='X'){
return 2;
}
else if(board[2][0]=='X'&&board[2][1]=='X'&&board[2][2]=='X'){
return 2;
}
//Options for winning vertically.
else if(board[0][0]=='X'&&board[1][0]=='X'&&board[2][0]=='X'){
return 2;
}
else if(board[0][1]=='X'&&board[1][1]=='X'&&board[2][1]=='X'){
return 2;
}
else if(board[0][2]=='X'&&board[1][2]=='X'&&board[2][2]=='X'){
return 2;
}
//Options for winning diagonally.
else if(board[0][0]=='X'&&board[1][1]=='X'&&board[2][2]=='X'){
return 2;
}
else if(board[0][2]=='X'&&board[1][1]=='X'&&board[2][0]=='X'){
return 2;
}
else{
return 0;
}
}
//Ends the game and loop in the main function if there is three in a row for either player.
int check_end_of_game(char board[SIZE][SIZE]){
if(check_three_in_a_row(board)==1||check_three_in_a_row(board)==2||check_table_full(board)){
return 1;
}
else{
return 0;
}
}
//Function for storing and inputting the user move.
void get_player1_move(char board[SIZE][SIZE], int row, int col){
printf("Player 1 enter your selection [row, col]:");
scanf("%d, %d", &row, &col);
while(!check_legal_option(board, row-1, col-1)){
printf("Player 1 enter your selection [row, col]:");
scanf("%d, %d", &row, &col);
}
update_table(board, row-1, col-1, 'O');
display_table(board);
return;
}
//Function that prints winner based on who won, or if there was a stalemate.
void print_winner(char board[SIZE][SIZE]){
if(check_table_full(board)==1){
printf("Game over, no player wins.\n");
}
if(check_three_in_a_row(board)==1){
printf("Congratulations, Player 1 wins!\n");
}
if(check_three_in_a_row(board)==2){
printf("Congratulations, Player 2 wins!\n");
}
return;
}




