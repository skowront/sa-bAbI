#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_0 = 73;                                       // Tag.BODY
    char entity_7[16];                                   // Tag.BODY
    for(entity_9 = 32; entity_9 < entity_0; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_2[47];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_7[entity_9] = 'i';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_5 = 13;                                       // Tag.BODY
    entity_6 = 93;                                       // Tag.BODY
    entity_2[entity_5] = 'q';                            // Tag.BUFWRITE_TAUT_SAFE
    char entity_3[43];                                   // Tag.BODY
    entity_3[entity_6] = 'r';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER