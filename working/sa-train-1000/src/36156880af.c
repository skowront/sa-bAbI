#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_0 = 43;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_2[13];                                   // Tag.BODY
    char entity_8[16];                                   // Tag.BODY
    entity_6 = 42;                                       // Tag.BODY
    entity_7 = 53;                                       // Tag.BODY
    char entity_4[41];                                   // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    if (entity_5 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 43;                                       // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_0] = '5';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_3 = 35; entity_3 < entity_5; entity_3++){ // Tag.BODY
    entity_8[entity_7] = 'V';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_2[entity_3] = 'l';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER