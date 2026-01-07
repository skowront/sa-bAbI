#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_8[13];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_4 = 88;                                       // Tag.BODY
    entity_6 = 79;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_3[35];                                   // Tag.BODY
    for(entity_1 = 43; entity_1 < entity_4; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_1] = '5';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_3[entity_6] = 'W';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER