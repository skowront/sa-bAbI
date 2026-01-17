#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    char entity_7[98];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 24;                                       // Tag.BODY
    for(entity_9 = 15; entity_9 < entity_2; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_1[88];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_7[entity_9] = 'd';                            // Tag.BUFWRITE_COND_SAFE
    entity_5 = 36;                                       // Tag.BODY
    entity_3 = 83;                                       // Tag.BODY
    char entity_8[32];                                   // Tag.BODY
    entity_8[entity_3] = '5';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1[entity_5] = '9';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER