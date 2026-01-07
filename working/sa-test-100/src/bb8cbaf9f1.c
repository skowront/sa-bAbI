#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_9[0];                                    // Tag.BODY
    char entity_2[61];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_0 = 40;                                       // Tag.BODY
    entity_8 = 65;                                       // Tag.BODY
    entity_9[entity_8] = 'r';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_6 = 93; entity_6 < entity_0; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_1[89];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_7 = 47;                                       // Tag.BODY
    entity_1[entity_7] = '6';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_6] = 's';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER