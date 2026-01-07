#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    entity_2 = 52;                                       // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_0[55];                                   // Tag.BODY
    entity_4 = 24;                                       // Tag.BODY
    char entity_7[64];                                   // Tag.BODY
    for(entity_9 = 33; entity_9 < entity_4; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_1[58];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_7[entity_2] = '8';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_0[entity_9] = 'u';                            // Tag.BUFWRITE_COND_SAFE
    entity_8 = 90;                                       // Tag.BODY
    entity_1[entity_8] = 'q';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER