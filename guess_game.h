#ifndef GUESS_GAME_H
#define GUESS_GAME_H

int generateRandom(int lower, int upper, int count){
	srand(time(0));
	int num = (rand() % (upper - lower +1)) + lower;
	return num;
}

int guessGame(int genNum){
	int userGuess;
	int i = 1;
	while (1){
		printf("Make a guess:");
		scanf("%d",&userGuess);

		if (userGuess > genNum){
			printf("No guess lower!\n");
			i = i+1;				
		}
		if (userGuess < genNum){
			printf("No guess higher!\n");
			i = i+1;
		}
		if (userGuess == genNum){
			printf("You got it! \n");
			return i;
		}
									
	}	
	return 0;

}

#endif

