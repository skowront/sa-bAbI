#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    char entity_2[60];                                   // Tag.BODY
    char entity_7[87];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_0 = 11;                                       // Tag.BODY
    entity_7[entity_0] = 'c';                            // Tag.BUFWRITE_TAUT_SAFE
    int entity_5;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_5 = 61;                                       // Tag.BODY
    entity_8 = rand();                                   // Tag.BODY
    if (entity_8 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8 = 18;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 29; entity_4 < entity_8; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_6[42];                                   // Tag.BODY
    entity_2[entity_4] = 's';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_9;                                        // Tag.BODY
    entity_9 = 79;                                       // Tag.BODY
    entity_6[entity_9] = 'P';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER