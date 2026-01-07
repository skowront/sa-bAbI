#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_9[7];                                    // Tag.BODY
    char entity_3[24];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_6 = 9;                                        // Tag.BODY
    entity_1 = 70;                                       // Tag.BODY
    for(entity_4 = 99; entity_4 < entity_6; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 63;                                       // Tag.BODY
    entity_9[entity_1] = 'B';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_8[19];                                   // Tag.BODY
    entity_3[entity_4] = 'E';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_8[entity_2] = '1';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER