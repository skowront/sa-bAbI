#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    char entity_2[48];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_7 = 0;                                        // Tag.BODY
    for(entity_3 = 60; entity_3 < entity_7; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_2[entity_3] = 'r';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_8 = 74;                                       // Tag.BODY
    char entity_0[3];                                    // Tag.BODY
    entity_0[entity_8] = 'm';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER