#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_1[13];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_9 = 80;                                       // Tag.BODY
    for(entity_0 = 19; entity_0 < entity_9; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_5[72];                                   // Tag.BODY
    entity_1[entity_0] = '5';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_3 = 62;                                       // Tag.BODY
    entity_5[entity_3] = 'c';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER