#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_7 = 49;                                       // Tag.BODY
    char entity_2[83];                                   // Tag.BODY
    for(entity_0 = 99; entity_0 < entity_7; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_0] = 'X';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_1[21];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_5 = 71;                                       // Tag.BODY
    entity_1[entity_5] = 'S';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER