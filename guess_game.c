#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "guess_game.h"

//int generateRandom(int lower, int upper, int count){
//		srand(time(0));
//		int num = (rand() % (upper - lower +1)) + lower;
//		return num;
//}

//int guessGame(int genNum){		
//		int userGuess;
		
//		int i = 1;
//		while (1){
//			printf("Make a guess:");
//			scanf("%d",&userGuess);		
//			if (userGuess > genNum){
//				printf("No guess lower!\n");
//				i = i+1;				
//			}
//			if (userGuess < genNum){
//				printf("No guess higher!\n");
//				i = i+1;
//			}
//			if (userGuess == genNum){
//				printf("You got it! \n");
//				return i;
//			}	
		
//		}
//		return 0;
//}

int main(){
		//int genNum = generateRandom(1,10,1);
		//int array[5] = {0,1,2,3,4};
		int array_numGuess[5];
		for (int j =0; j < 5 ; j++){		
				int genNum = generateRandom(1,10,1);
				
				for (int i=0; i<15;i++,printf("%s","=="));
				printf("\nCPU Says:Pick a number 1-10 \n");
				for (int i=0; i<15;i++,printf("%s","=="));	 
				printf("\n");

				int numOfGuess = guessGame(genNum);
				array_numGuess[j]=numOfGuess;
				//printf("Game %d took you %d guesses \n",j, numOfGuess);
		}

		for (int i=0; i<25;i++,printf("%s","=="));	 
		printf("\n|Here are the results of your guessing abilities|\n");
		for (int i=0; i<25;i++,printf("%s","=="));
		printf("\n");
	 
		for (int p=0; p<5;p++){
				printf("Game %d took you %d of guesses \n", p , array_numGuess[p]);
		}
		
		return 0;
}
