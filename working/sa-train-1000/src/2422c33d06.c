#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    char entity_2[70];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_4[85];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_9 = 26;                                       // Tag.BODY
    char entity_5[9];                                    // Tag.BODY
    entity_6 = 81;                                       // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_8 = rand();                                   // Tag.BODY
    entity_1 = 41;                                       // Tag.BODY
    entity_5[entity_9] = 'd';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_6] = 'D';                            // Tag.BUFWRITE_TAUT_UNSAFE
    if (entity_8 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8 = 26;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 15; entity_3 < entity_8; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_3] = 'J';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER