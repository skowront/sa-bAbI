#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_7[30];                                   // Tag.BODY
    entity_8 = 44;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_3 = 35;                                       // Tag.BODY
    char entity_6[72];                                   // Tag.BODY
    for(entity_2 = 78; entity_2 < entity_8; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_3] = '1';                            // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_4;                                        // Tag.BODY
    entity_4 = 11;                                       // Tag.BODY
    char entity_9[46];                                   // Tag.BODY
    entity_9[entity_4] = 'V';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_6[entity_2] = 'E';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER