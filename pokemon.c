#include <stdio.h>
//Pokémon game pog
    int random_number(int min_num, int max_num);

    int main(void)
    {
       random_number(1,100);
        return 0;
    }

    int random_number(int min_num, int max_num)
    {
        int result = 0, low_num = 0, hi_num = 0;

        if (min_num < max_num)
        {
            low_num = min_num;
            hi_num = max_num + 1;
        } else {
            low_num = max_num + 1;
            hi_num = min_num;
        }

        srand(time(NULL));
        result = (rand() % (hi_num - low_num)) + low_num;
        if(result == 1){
            printf("--- Pokémon Rare! ---\n");
            printf("--- Vous avez attrapé un Dracofeu! ---");
        }
        else if(result == 2){
            printf("--- Pokémon Rare! ---\n");
            printf("--- Vous avez attrapé un Tortank! ---");
        }
               else if(result == 3){
            printf("--- Pokémon Rare! ---\n");
            printf("--- Vous avez attrapé un Florizarre! ---");
        }
               else if(result < 20 && result > 3){
            printf("--- Pokémon Commun! ---\n");
            printf("--- Vous avez attrapé un Poussifeu! ---");
        }
                       else if(result > 20 && result < 50){
            printf("--- Pokémon Commun! ---\n");
            printf("--- Vous avez attrapé un Pikachu! ---");
        }
                    else if(result > 50 && result < 75){
            printf("--- Pokémon Commun! ---\n");
            printf("--- Vous avez attrapé un Chotiflore! ---");
        }
                           else if(result > 75 && result < 99){
            printf("--- Pokémon Commun! ---\n");
            printf("--- Vous avez attrapé un Evolie! ---");
        }
                           else if(result == 100){
       
            printf("--- ... Qu'est-ce que c'est? ... ---\n");
            printf("--- Vous avez attrapé un Mew! ---");
        }
        
    }
