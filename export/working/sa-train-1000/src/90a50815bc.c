#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_9[58];                                   // Tag.BODY
    char entity_6[76];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_4 = 96;                                       // Tag.BODY
    entity_3 = 83;                                       // Tag.BODY
    entity_9[entity_3] = 'x';                            // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_0;                                        // Tag.BODY
    for(entity_0 = 66; entity_0 < entity_4; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_0] = 'V';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER