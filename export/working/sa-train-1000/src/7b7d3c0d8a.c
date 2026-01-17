#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_1[80];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_5 = 13;                                       // Tag.BODY
    entity_0 = 39;                                       // Tag.BODY
    char entity_4[65];                                   // Tag.BODY
    for(entity_7 = 57; entity_7 < entity_5; entity_7++){ // Tag.BODY
    entity_1[entity_0] = 'U';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_8[58];                                   // Tag.BODY
    entity_4[entity_7] = '5';                            // Tag.BUFWRITE_COND_SAFE
    entity_6 = 88;                                       // Tag.BODY
    entity_8[entity_6] = 'a';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER