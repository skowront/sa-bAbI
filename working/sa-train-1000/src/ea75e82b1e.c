#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_9 = 47;                                       // Tag.BODY
    char entity_1[64];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_3[80];                                   // Tag.BODY
    entity_6 = 46;                                       // Tag.BODY
    entity_3[entity_6] = 'o';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_4 = 27; entity_4 < entity_9; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_4] = 't';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER