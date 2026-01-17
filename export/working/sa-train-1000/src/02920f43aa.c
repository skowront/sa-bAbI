#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_2[66];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_5[90];                                   // Tag.BODY
    entity_0 = 84;                                       // Tag.BODY
    char entity_4[48];                                   // Tag.BODY
    entity_6 = 41;                                       // Tag.BODY
    entity_7 = 70;                                       // Tag.BODY
    entity_5[entity_7] = 'i';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_8 = 57; entity_8 < entity_6; entity_8++){ // Tag.BODY
    entity_2[entity_0] = 'D';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_4[entity_8] = 'L';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER