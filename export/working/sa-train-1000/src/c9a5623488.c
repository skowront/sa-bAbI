#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_5 = 31;                                       // Tag.BODY
    char entity_7[38];                                   // Tag.BODY
    entity_8 = 43;                                       // Tag.BODY
    entity_7[entity_5] = 'o';                            // Tag.BUFWRITE_TAUT_SAFE
    int entity_4;                                        // Tag.BODY
    char entity_9[55];                                   // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    if (entity_4 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 31;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 42; entity_2 < entity_4; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_2] = 'X';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER