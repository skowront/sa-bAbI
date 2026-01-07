#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_0[8];                                    // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_5 = 84;                                       // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 85;                                       // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    char entity_8[94];                                   // Tag.BODY
    if (entity_9 < entity_3){                            // Tag.BODY
    entity_0[entity_5] = 'F';                            // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                                             // Tag.BODY
    entity_9 = 72;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_6 = 85; entity_6 < entity_9; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_6] = 'j';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER