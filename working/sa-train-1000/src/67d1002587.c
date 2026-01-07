#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 78;                                       // Tag.BODY
    char entity_4[3];                                    // Tag.BODY
    char entity_1[80];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_7 = 51;                                       // Tag.BODY
    entity_4[entity_7] = '6';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_9[81];                                   // Tag.BODY
    entity_5 = 58;                                       // Tag.BODY
    for(entity_6 = 60; entity_6 < entity_3; entity_6++){ // Tag.BODY
    entity_9[entity_5] = 'i';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    entity_1[entity_6] = '5';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER