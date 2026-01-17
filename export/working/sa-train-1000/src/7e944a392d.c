#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_0[70];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_9 = 57;                                       // Tag.BODY
    entity_3 = 64;                                       // Tag.BODY
    char entity_4[22];                                   // Tag.BODY
    entity_4[entity_9] = 'q';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_5 = 49; entity_5 < entity_3; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_5] = 'u';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER