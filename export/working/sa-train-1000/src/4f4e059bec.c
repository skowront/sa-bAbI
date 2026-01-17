#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    char entity_4[88];                                   // Tag.BODY
    entity_5 = 42;                                       // Tag.BODY
    int entity_0;                                        // Tag.BODY
    for(entity_0 = 78; entity_0 < entity_5; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_0] = 'A';                            // Tag.BUFWRITE_COND_SAFE
    char entity_8[13];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = 72;                                       // Tag.BODY
    char entity_7[31];                                   // Tag.BODY
    entity_8[entity_6] = 'v';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1 = 21;                                       // Tag.BODY
    entity_7[entity_1] = 'q';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER