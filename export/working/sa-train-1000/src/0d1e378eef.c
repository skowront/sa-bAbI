#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_5[34];                                   // Tag.BODY
    entity_6 = 87;                                       // Tag.BODY
    for(entity_9 = 35; entity_9 < entity_6; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_8 = 14;                                       // Tag.BODY
    entity_5[entity_9] = 'p';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_3[22];                                   // Tag.BODY
    entity_3[entity_8] = 'A';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER