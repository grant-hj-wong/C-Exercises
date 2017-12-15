/* Standard number addition game to practice C I/O - By Grant Wong */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>

int rand_num();

int main(int argc, char **argv){
    int score = 0;
    while(1){
        int rand1 = rand_num();
        sleep(1);
        int rand2 = rand_num();
        printf("What is %d + %d?\n", rand1, rand2);
        char ans[20];
        scanf("%s", ans);
        char *result = malloc(20);
        if (rand1 + rand2 == atoi(ans)){
            score += 1;
            result = "Correct! Score: ";
            }
        else{
            score -= 1;
            result = "Incorrect. Score: ";
        }
        printf("%s%d\n", result, score);
    }
    return 0;
}

int rand_num(){
    srand(time(NULL));
    return rand() % 20;
}
