#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    char entity_4[9];                                    // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 31;                                       // Tag.BODY
    for(entity_0 = 66; entity_0 < entity_3; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_9[59];                                   // Tag.BODY
    entity_4[entity_0] = '3';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_2 = 87;                                       // Tag.BODY
    entity_6 = 56;                                       // Tag.BODY
    char entity_5[41];                                   // Tag.BODY
    entity_9[entity_6] = 's';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_5[entity_2] = 'x';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER