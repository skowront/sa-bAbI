#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    char entity_0[23];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_2 = 81;                                       // Tag.BODY
    for(entity_7 = 54; entity_7 < entity_2; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_7] = 'P';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_3;                                        // Tag.BODY
    char entity_6[44];                                   // Tag.BODY
    entity_3 = 65;                                       // Tag.BODY
    entity_6[entity_3] = 'k';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER