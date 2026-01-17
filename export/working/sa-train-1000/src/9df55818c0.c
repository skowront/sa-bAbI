#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_8 = rand();                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_3 = 72;                                       // Tag.BODY
    char entity_9[56];                                   // Tag.BODY
    if (entity_8 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8 = 81;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 63; entity_2 < entity_8; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_6[32];                                   // Tag.BODY
    entity_1 = 55;                                       // Tag.BODY
    entity_6[entity_1] = 'r';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9[entity_2] = 'm';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER