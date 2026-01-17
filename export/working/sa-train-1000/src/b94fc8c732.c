#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_4 = 75;                                       // Tag.BODY
    char entity_8[33];                                   // Tag.BODY
    for(entity_2 = 45; entity_2 < entity_4; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_8[entity_2] = 'g';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_3 = 96;                                       // Tag.BODY
    char entity_1[28];                                   // Tag.BODY
    entity_1[entity_3] = 'L';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER