#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_4[82];                                   // Tag.BODY
    entity_2 = 39;                                       // Tag.BODY
    for(entity_1 = 22; entity_1 < entity_2; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_6[46];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_4[entity_1] = 'r';                            // Tag.BUFWRITE_COND_SAFE
    entity_7 = 58;                                       // Tag.BODY
    entity_6[entity_7] = 'w';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER