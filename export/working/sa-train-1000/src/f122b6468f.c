#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_0[71];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_6[51];                                   // Tag.BODY
    entity_4 = 32;                                       // Tag.BODY
    entity_7 = 82;                                       // Tag.BODY
    entity_6[entity_4] = 'f';                            // Tag.BUFWRITE_TAUT_SAFE
    int entity_5;                                        // Tag.BODY
    for(entity_5 = 76; entity_5 < entity_7; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_5] = 'f';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER