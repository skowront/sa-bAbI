#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_7 = 71;                                       // Tag.BODY
    entity_1 = 11;                                       // Tag.BODY
    char entity_9[14];                                   // Tag.BODY
    char entity_0[63];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    for(entity_4 = 29; entity_4 < entity_1; entity_4++){ // Tag.BODY
    entity_9[entity_7] = 'K';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_0[entity_4] = 'T';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER