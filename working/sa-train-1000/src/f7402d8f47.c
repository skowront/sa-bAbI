#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_9[47];                                   // Tag.BODY
    entity_5 = 12;                                       // Tag.BODY
    char entity_6[62];                                   // Tag.BODY
    entity_1 = 95;                                       // Tag.BODY
    entity_2 = 38;                                       // Tag.BODY
    entity_6[entity_5] = 'w';                            // Tag.BUFWRITE_TAUT_SAFE
    int entity_3;                                        // Tag.BODY
    char entity_4[21];                                   // Tag.BODY
    for(entity_3 = 11; entity_3 < entity_1; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_2] = 'f';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9[entity_3] = 'c';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER