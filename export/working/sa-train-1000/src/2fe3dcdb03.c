#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_1[50];                                   // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_2 = 44;                                       // Tag.BODY
    if (entity_6 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 3;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 68; entity_4 < entity_6; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_3[38];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_5 = 93;                                       // Tag.BODY
    entity_1[entity_4] = 'G';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_8[36];                                   // Tag.BODY
    entity_8[entity_5] = 'S';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9 = 94;                                       // Tag.BODY
    entity_3[entity_9] = '5';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER