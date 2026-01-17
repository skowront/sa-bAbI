#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_9[13];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_2[69];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_7 = 52;                                       // Tag.BODY
    entity_4 = 35;                                       // Tag.BODY
    entity_3 = 82;                                       // Tag.BODY
    char entity_8[53];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_8[entity_4] = 'B';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_6 = 31; entity_6 < entity_3; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_6] = 'F';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_9[entity_7] = 'V';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER