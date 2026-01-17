#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_3[18];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_5[7];                                    // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_6 = 81;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_9 = 30;                                       // Tag.BODY
    entity_3[entity_6] = '2';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0 = 2;                                        // Tag.BODY
    char entity_7[53];                                   // Tag.BODY
    for(entity_2 = 56; entity_2 < entity_9; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_0] = 'V';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_7[entity_2] = 'U';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER