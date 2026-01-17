#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    char entity_6[11];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_8 = 49;                                       // Tag.BODY
    char entity_5[78];                                   // Tag.BODY
    entity_9 = 52;                                       // Tag.BODY
    for(entity_4 = 40; entity_4 < entity_8; entity_4++){ // Tag.BODY
    entity_6[entity_9] = 'Y';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_5[entity_4] = 'd';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER