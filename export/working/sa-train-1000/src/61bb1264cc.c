#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_6[22];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 32;                                       // Tag.BODY
    for(entity_4 = 50; entity_4 < entity_3; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_4] = 'x';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_2;                                        // Tag.BODY
    char entity_1[62];                                   // Tag.BODY
    entity_2 = 59;                                       // Tag.BODY
    entity_1[entity_2] = '7';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER