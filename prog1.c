#include <stdio.h> // Necessary for printf()
#include <stdlib.h>
#include <time.h>

// TODO Other includes


int main() {
	// The main function is the entrypoint of the program. When the program
	// is executed, it will automatically start here.
    srand(time(NULL));
    int myrand = rand() % 11; //Generate random number

    //Logic statements for myrand values
    if (myrand <= 4) {
        printf("Eat more beef, kick less cats\n");

    } else if (myrand <= 9){
        printf("FRODO LIVES\n");

    } else if (myrand == 10) {
        printf("Larn is the best roguelike\n");
    }

    printf("The random number was: %d\n", myrand); //Print random number used

    return 0;
	// TODO Complete the program
}
