#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 79;                                       // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    char entity_5[28];                                   // Tag.BODY
    if (entity_4 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 65;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 92; entity_3 < entity_4; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_9[58];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_1[65];                                   // Tag.BODY
    entity_5[entity_3] = '9';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_6;                                        // Tag.BODY
    entity_0 = 45;                                       // Tag.BODY
    entity_1[entity_0] = 'X';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_6 = 5;                                        // Tag.BODY
    entity_9[entity_6] = 'X';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER