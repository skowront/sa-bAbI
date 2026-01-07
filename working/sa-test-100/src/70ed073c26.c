#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_5[89];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_4 = 82;                                       // Tag.BODY
    for(entity_9 = 88; entity_9 < entity_4; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_9] = '0';                            // Tag.BUFWRITE_COND_SAFE
    int entity_6;                                        // Tag.BODY
    entity_6 = 69;                                       // Tag.BODY
    char entity_1[99];                                   // Tag.BODY
    entity_1[entity_6] = 'F';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER