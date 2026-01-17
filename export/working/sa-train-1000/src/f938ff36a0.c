#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_5 = 42;                                       // Tag.BODY
    char entity_7[49];                                   // Tag.BODY
    for(entity_1 = 87; entity_1 < entity_5; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_4[58];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_7[entity_1] = 'K';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_3 = 18;                                       // Tag.BODY
    entity_8 = 21;                                       // Tag.BODY
    char entity_0[14];                                   // Tag.BODY
    entity_0[entity_8] = 'n';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_4[entity_3] = 'x';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER