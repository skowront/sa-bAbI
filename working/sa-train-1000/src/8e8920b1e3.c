#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_9[37];                                   // Tag.BODY
    entity_1 = 17;                                       // Tag.BODY
    entity_7 = 33;                                       // Tag.BODY
    char entity_8[64];                                   // Tag.BODY
    for(entity_4 = 88; entity_4 < entity_7; entity_4++){ // Tag.BODY
    entity_9[entity_1] = 'j';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    entity_8[entity_4] = 'R';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER