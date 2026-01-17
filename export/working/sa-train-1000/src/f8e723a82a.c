#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    entity_8 = 22;                                       // Tag.BODY
    char entity_0[73];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    for(entity_1 = 45; entity_1 < entity_8; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_4[4];                                    // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_0[entity_1] = 'l';                            // Tag.BUFWRITE_COND_SAFE
    entity_5 = 87;                                       // Tag.BODY
    entity_4[entity_5] = 'A';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER