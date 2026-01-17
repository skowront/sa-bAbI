#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_0[37];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_1[39];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_7 = 64;                                       // Tag.BODY
    entity_4 = 60;                                       // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    if (entity_9 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1[entity_4] = '4';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9 = 82;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 29; entity_5 < entity_9; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_5] = 'v';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER