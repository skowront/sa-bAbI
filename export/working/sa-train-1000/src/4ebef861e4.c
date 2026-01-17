#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_1[92];                                   // Tag.BODY
    entity_3 = 93;                                       // Tag.BODY
    char entity_0[73];                                   // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    entity_6 = 21;                                       // Tag.BODY
    if (entity_9 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 96;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 96; entity_5 < entity_9; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_6] = '7';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_0[entity_5] = 'F';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER