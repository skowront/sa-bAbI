#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    entity_6 = 99;                                       // Tag.BODY
    char entity_9[59];                                   // Tag.BODY
    if (entity_5 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 17;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 78; entity_4 < entity_5; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_7[14];                                   // Tag.BODY
    char entity_0[52];                                   // Tag.BODY
    entity_9[entity_4] = 'F';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_1 = 77;                                       // Tag.BODY
    entity_7[entity_1] = 'j';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3 = 6;                                        // Tag.BODY
    entity_0[entity_3] = '4';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER