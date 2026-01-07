#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_8[39];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_3[2];                                    // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_5 = 49;                                       // Tag.BODY
    entity_8[entity_5] = 'W';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9 = 77;                                       // Tag.BODY
    for(entity_4 = 43; entity_4 < entity_9; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_4] = 'c';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_7;                                        // Tag.BODY
    entity_7 = 45;                                       // Tag.BODY
    char entity_1[56];                                   // Tag.BODY
    entity_1[entity_7] = 'C';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER