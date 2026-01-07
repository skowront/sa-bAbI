#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_0[16];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_8[23];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_2[3];                                    // Tag.BODY
    entity_9 = 92;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_7 = 66;                                       // Tag.BODY
    entity_6 = 51;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    for(entity_5 = 54; entity_5 < entity_9; entity_5++){ // Tag.BODY
    entity_2[entity_7] = 'B';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_8[entity_5] = 'u';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_0[entity_6] = 'q';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER