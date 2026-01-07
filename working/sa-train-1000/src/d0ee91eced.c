#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_8[57];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 1;                                        // Tag.BODY
    for(entity_0 = 40; entity_0 < entity_2; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_1[83];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = 90;                                       // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_4 = 81;                                       // Tag.BODY
    entity_8[entity_0] = 'M';                            // Tag.BUFWRITE_COND_SAFE
    entity_1[entity_4] = 'h';                            // Tag.BUFWRITE_TAUT_SAFE
    char entity_3[16];                                   // Tag.BODY
    entity_3[entity_9] = 'l';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER