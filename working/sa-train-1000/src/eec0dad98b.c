#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_2 = 83;                                       // Tag.BODY
    entity_0 = 33;                                       // Tag.BODY
    char entity_1[94];                                   // Tag.BODY
    char entity_5[68];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_5[entity_2] = 't';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_9 = 92; entity_9 < entity_0; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_3[20];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_1[entity_9] = 't';                            // Tag.BUFWRITE_COND_SAFE
    entity_6 = 32;                                       // Tag.BODY
    entity_3[entity_6] = '7';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER