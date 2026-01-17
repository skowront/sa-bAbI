#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    char entity_2[39];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_7 = 95;                                       // Tag.BODY
    for(entity_0 = 88; entity_0 < entity_7; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_3[24];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_2[entity_0] = 'M';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_1 = 99;                                       // Tag.BODY
    entity_3[entity_1] = 'o';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER