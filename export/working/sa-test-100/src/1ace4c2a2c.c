#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    entity_9 = 13;                                       // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_3[79];                                   // Tag.BODY
    for(entity_0 = 30; entity_0 < entity_9; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_3[entity_0] = 'z';                            // Tag.BUFWRITE_COND_SAFE
    entity_2 = 54;                                       // Tag.BODY
    char entity_1[40];                                   // Tag.BODY
    entity_1[entity_2] = 'U';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_5[48];                                   // Tag.BODY
    entity_4 = 45;                                       // Tag.BODY
    entity_5[entity_4] = 'i';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER