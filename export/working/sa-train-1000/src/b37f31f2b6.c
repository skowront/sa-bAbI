#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    char entity_5[91];                                   // Tag.BODY
    entity_1 = 39;                                       // Tag.BODY
    entity_5[entity_1] = 'q';                            // Tag.BUFWRITE_TAUT_SAFE
    int entity_2;                                        // Tag.BODY
    entity_2 = 66;                                       // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_3[90];                                   // Tag.BODY
    for(entity_8 = 31; entity_8 < entity_2; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_0 = 44;                                       // Tag.BODY
    entity_3[entity_8] = 'M';                            // Tag.BUFWRITE_COND_SAFE
    char entity_6[33];                                   // Tag.BODY
    entity_6[entity_0] = 'U';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER