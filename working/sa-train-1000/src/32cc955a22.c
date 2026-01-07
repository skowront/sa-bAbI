#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_1 = 30;                                       // Tag.BODY
    char entity_8[58];                                   // Tag.BODY
    entity_0 = 19;                                       // Tag.BODY
    char entity_6[16];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_6[entity_1] = 'k';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_4 = 41; entity_4 < entity_0; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_4] = 'I';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER