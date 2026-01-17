#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_8 = 67;                                       // Tag.BODY
    entity_3 = 82;                                       // Tag.BODY
    char entity_6[82];                                   // Tag.BODY
    char entity_5[45];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_5[entity_8] = 'Y';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_7 = 85; entity_7 < entity_3; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_7] = '5';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER