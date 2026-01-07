#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_5[7];                                    // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_3[44];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_8[73];                                   // Tag.BODY
    entity_7 = 3;                                        // Tag.BODY
    entity_5[entity_7] = 'f';                            // Tag.BUFWRITE_TAUT_SAFE
    int entity_2;                                        // Tag.BODY
    entity_0 = 7;                                        // Tag.BODY
    entity_2 = 84;                                       // Tag.BODY
    int entity_4;                                        // Tag.BODY
    for(entity_4 = 69; entity_4 < entity_0; entity_4++){ // Tag.BODY
    entity_3[entity_2] = 'r';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_8[entity_4] = 'K';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER