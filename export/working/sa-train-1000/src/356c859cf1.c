#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_8[47];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_3[42];                                   // Tag.BODY
    entity_9 = 92;                                       // Tag.BODY
    entity_0 = 5;                                        // Tag.BODY
    for(entity_1 = 31; entity_1 < entity_9; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_5[70];                                   // Tag.BODY
    entity_3[entity_1] = '5';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_2 = 54;                                       // Tag.BODY
    entity_8[entity_0] = 'k';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_5[entity_2] = '7';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER