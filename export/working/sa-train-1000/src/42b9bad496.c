#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    char entity_2[39];                                   // Tag.BODY
    char entity_7[94];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_9[78];                                   // Tag.BODY
    entity_5 = 67;                                       // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_8 = 96;                                       // Tag.BODY
    entity_3 = 53;                                       // Tag.BODY
    for(entity_4 = 34; entity_4 < entity_5; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_8] = '3';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7[entity_4] = 'g';                            // Tag.BUFWRITE_COND_SAFE
    entity_9[entity_3] = 'a';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER