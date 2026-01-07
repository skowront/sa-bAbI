#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_4[65];                                   // Tag.BODY
    char entity_6[52];                                   // Tag.BODY
    entity_8 = 21;                                       // Tag.BODY
    entity_5 = 75;                                       // Tag.BODY
    char entity_9[66];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_2 = 70;                                       // Tag.BODY
    entity_9[entity_8] = 'm';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_1 = 85; entity_1 < entity_5; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_2] = 'Y';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6[entity_1] = '3';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER