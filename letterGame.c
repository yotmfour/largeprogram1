

/*Yoselyn Rea, 10/09/17, Large Program 1, Letter Guessing Game*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXGUESSES 5



//paste all the function prototypes here
//with the comments



//this function provides instructions to the user on how to play the game 

void GameRules();

//this function runs one game. 
//input: character from the file, void return type 
//all other functions to Play one round of a game 
//are called from within the GuessTheLetter function 
void GuessTheLetter(char);

//this function prompts the player to make a guess and returns that guess 
//this function is called from inside the GuessTheLetter( ) function described above 
char GetTheGuess();

//this function takes two arguments, the guess from the player 
//and the solution letter from the file. 
//The function returns 1 if the guess matches the solution and returns a 0 if they do not match 
//This function also lets the user know if the guess comes alphabetically before or after the answer 
int CompareLetters(char, char);


int main()
{
	//declare additional variables
	
	//declare FILE pointer
	FILE *inPtr;
	int numGames = 2, i = 0;

	//printf("Get a letter from the file %d", inPtr);
	
	char letter;//letter from file

				//display game rules
				//this function provides instructions to the user on how to play the game 
	GameRules();

				//Ask and get number of games to play
	GetTheGuess();

				//connect to the file HINT: use fopen
	inPtr = fopen("letterList.txt", "r");

				//this for loop will allow the players to play more than one game
				//without recompiling
	printf("How many games? (1-8)");
	scanf("%d", &numGames);
	for (i = 0; i < numGames; i++)
	{
		//get a solution letter from file - use fscanf
		fscanf(inPtr, "%c", &letter);
		//change the solution to lowercase
		letter = tolower(letter);
		//print the solution back onto the screen to test
		printf("\nThe letter is %c\n", letter);

		//call the GuessTheLetter function and pass it the solution


	}

	//close file pointer
	return 0;
}

//this function runs one game. 
//input: character from the file, void return type
//all other functions to Play one round of a game 
//are called from within the GuessTheLetter function
//this function lets the user know if they have won or lost the game
void GuessTheLetter(char solution)
{
	int win = 0;
	int numGuesses = 0;
	//declare additional variables 

	while (numGuesses < MAXGUESSES && win == 0)
	{
		//get a guess from the user  by calling the GetTheGuess function
		//change the guess to lowercase
		//win = call the function to compare the guess with the solution
		numGuesses++;//count the number of guesses so far
	}
	//use conditions to let the user know if they won or lost the round of the game

}

//this function provides instructions to the user on how to play the game 
int numGames;
void GameRules()
{
	printf("Welcome to the Letter Guessing Game\n\n");
	printf("First, you will enter the number of games you want to play (1-8)\nFor each game you will have 5 chances to guess each letter\nLet's begin:\n");
	return;
}



//this function prompts the player to make a guess and returns that guess 


//this function is called from inside the GuessTheLetter( ) function described above 
char GetTheGuess()
{
	char guessLetter;
	printf("Enter a letter: ");
	scanf("%c", &guessLetter);
	return guessLetter;
}

//this function takes two arguments, the guess from the player 
//and the solution letter from the file. 
//The function returns 1 if the guess matches the solution and returns a 0 if they do not match 
//This function also lets the user know if the guess comes alphabetically before or after the answer 
int CompareLetters(char letterFromFile, char guessFromUser)
{
	char input;
	if (letterFromFile > guessFromUser)input = 0;
	else input = 1;
	printf("this letter comes before");
	return 0;

}
