#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>


//Lets keep this short or someone's outdated computer might crash
#define MAX 100  

int main()
{
    //variables
    unsigned long guesses = 0;
    char guess[MAX];
    char pass[MAX];
    char letter[2];
    char number[2];
    char special[2];
    char password[MAX];

    bool pluggedin_no = 0;
    bool pluggedin_yes = 1;

    const char letters[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char numbers[10] = "0123456789";
    const char specials[31] = "'`~!@#$%^&*()_-+={}[]|\:;<,.>?/";

    //This is where your password will be stored in the program and then put in the variable "pass" for the program to guess.
    srand(time(NULL));
    printf("\nInput your password: ");
    scanf("%s", pass);


    if (pluggedin_no = 0) {
        return 0;
    }

    else if (pluggedin_yes = 1) {
        return 0; //TEMPORARY
    }


    //This is the loop that will continue to guess until it reaches the passsword or runs out of guesses.
    //This will go into if the USB detection is plugged in
    while (1)
    {
        // Reset guess
        for (int j = 0; j < MAX; j++)
        {
            guess[j] = '\0';
        }
        // Choose a random number
        // Copy a random element from var letters
        // Concentrate the letter to the guess and repeat till its as long as the password
        while (strlen(guess) < strlen(pass))
        {
            letter[0] = letters[rand() % 52];   // Set up character string with one random letter character 
            letter[1] = '\0';
            strcat(guess, letter);

            
            number[0] = numbers[rand() % 10]; //set up character string with one random number character
            number[1] = '\0';
            strcat(guess, number);

            /*
            * 
            // NOT WORKING PROPERLY WILL IMPLEMENT LATER
            * 
            special[0] = special[rand() % 31]; //set up character string with one random special character
            special[1] = '\0';
            strcat(guess, special);
            */
            
        }

        printf("%s\n", guess);
        guesses++;
        if (strcmp(guess, pass) == 0)
        {
            break;
        }
    }

    printf("your guess was %s and was found in %lu guesses\n", guess, guesses);

    return 0;
}
