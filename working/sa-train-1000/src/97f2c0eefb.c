#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_2[98];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_5 = 61;                                       // Tag.BODY
    for(entity_3 = 23; entity_3 < entity_5; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_4[36];                                   // Tag.BODY
    entity_1 = 41;                                       // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_2[entity_3] = 'h';                            // Tag.BUFWRITE_COND_SAFE
    char entity_6[75];                                   // Tag.BODY
    entity_6[entity_1] = '9';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_9 = 12;                                       // Tag.BODY
    entity_4[entity_9] = 'J';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER