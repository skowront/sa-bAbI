#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_2[48];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_7[72];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_4 = 5;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_9[47];                                   // Tag.BODY
    entity_1 = 52;                                       // Tag.BODY
    entity_8 = 69;                                       // Tag.BODY
    for(entity_5 = 90; entity_5 < entity_4; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_1] = 'y';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_8] = 'y';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9[entity_5] = '1';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER