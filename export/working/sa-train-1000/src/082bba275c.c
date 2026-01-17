#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_4[83];                                   // Tag.BODY
    char entity_7[91];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_0[28];                                   // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_3 = 52;                                       // Tag.BODY
    entity_7[entity_3] = 'm';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_6 = 56;                                       // Tag.BODY
    entity_9 = 83;                                       // Tag.BODY
    entity_4[entity_9] = 'A';                            // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_8;                                        // Tag.BODY
    if (entity_5 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 76;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 69; entity_8 < entity_5; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_8] = 'q';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER