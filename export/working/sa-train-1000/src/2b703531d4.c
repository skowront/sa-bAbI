#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_0[20];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 28;                                       // Tag.BODY
    entity_6 = 61;                                       // Tag.BODY
    char entity_8[43];                                   // Tag.BODY
    entity_0[entity_6] = '3';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_7 = 61; entity_7 < entity_3; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_7] = 'o';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_5;                                        // Tag.BODY
    char entity_1[57];                                   // Tag.BODY
    entity_5 = 26;                                       // Tag.BODY
    entity_1[entity_5] = 't';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER