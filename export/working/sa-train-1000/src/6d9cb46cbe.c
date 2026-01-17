#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_4[69];                                   // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    char entity_0[59];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_1 = 21;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_0[entity_1] = 'c';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_8 = 91;                                       // Tag.BODY
    if (entity_3 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 99;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 12; entity_5 < entity_3; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_4[entity_5] = 'V';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_9 = 56;                                       // Tag.BODY
    char entity_6[22];                                   // Tag.BODY
    entity_6[entity_9] = 'd';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER