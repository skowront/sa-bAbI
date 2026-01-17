#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    char entity_8[44];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_2[11];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_0 = 98;                                       // Tag.BODY
    entity_7 = 12;                                       // Tag.BODY
    for(entity_3 = 24; entity_3 < entity_7; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_2[entity_3] = 'w';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_6 = 79;                                       // Tag.BODY
    char entity_1[81];                                   // Tag.BODY
    entity_1[entity_6] = 'r';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_8[entity_0] = 'O';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER