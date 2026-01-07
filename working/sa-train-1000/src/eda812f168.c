#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_6[74];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_8 = rand();                                   // Tag.BODY
    char entity_4[3];                                    // Tag.BODY
    entity_2 = 61;                                       // Tag.BODY
    entity_3 = 93;                                       // Tag.BODY
    if (entity_8 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8 = 43;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 33; entity_1 < entity_8; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_0[90];                                   // Tag.BODY
    entity_9 = 2;                                        // Tag.BODY
    entity_4[entity_3] = 'y';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0[entity_9] = 'H';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_6[entity_1] = 'l';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER