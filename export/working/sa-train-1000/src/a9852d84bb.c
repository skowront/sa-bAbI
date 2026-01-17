#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_1[18];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_3 = 75;                                       // Tag.BODY
    char entity_6[76];                                   // Tag.BODY
    entity_0 = 84;                                       // Tag.BODY
    int entity_7;                                        // Tag.BODY
    for(entity_7 = 54; entity_7 < entity_3; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_0] = 'c';                            // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_5;                                        // Tag.BODY
    entity_5 = 3;                                        // Tag.BODY
    entity_6[entity_7] = 'o';                            // Tag.BUFWRITE_COND_SAFE
    char entity_8[9];                                    // Tag.BODY
    entity_8[entity_5] = 's';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER