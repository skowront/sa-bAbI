#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_3[61];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_8 = 54;                                       // Tag.BODY
    entity_5 = 62;                                       // Tag.BODY
    char entity_7[48];                                   // Tag.BODY
    for(entity_2 = 34; entity_2 < entity_8; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_5] = 'f';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3[entity_2] = 'e';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER