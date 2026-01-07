#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_9[94];                                   // Tag.BODY
    entity_8 = 76;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_5 = 45;                                       // Tag.BODY
    char entity_7[23];                                   // Tag.BODY
    for(entity_1 = 99; entity_1 < entity_5; entity_1++){ // Tag.BODY
    entity_7[entity_8] = 'T';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    char entity_2[53];                                   // Tag.BODY
    entity_9[entity_1] = 'y';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_6;                                        // Tag.BODY
    entity_6 = 60;                                       // Tag.BODY
    entity_2[entity_6] = 'g';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER