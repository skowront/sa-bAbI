#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    char entity_6[65];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_4 = 77;                                       // Tag.BODY
    for(entity_3 = 40; entity_3 < entity_4; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_6[entity_3] = 'V';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_1;                                        // Tag.BODY
    char entity_9[13];                                   // Tag.BODY
    entity_2 = 94;                                       // Tag.BODY
    char entity_5[5];                                    // Tag.BODY
    entity_9[entity_2] = 'H';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1 = 81;                                       // Tag.BODY
    entity_5[entity_1] = 'X';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER