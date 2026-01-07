#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    char entity_8[46];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_2 = 62;                                       // Tag.BODY
    entity_6 = 93;                                       // Tag.BODY
    char entity_5[57];                                   // Tag.BODY
    for(entity_3 = 68; entity_3 < entity_6; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_2] = '1';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8[entity_3] = 'Y';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER