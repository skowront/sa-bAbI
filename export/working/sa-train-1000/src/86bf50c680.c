#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    char entity_7[2];                                    // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 21;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_8 = 56;                                       // Tag.BODY
    char entity_0[82];                                   // Tag.BODY
    entity_0[entity_2] = 'm';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_6 = 90; entity_6 < entity_8; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_6] = 'a';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER