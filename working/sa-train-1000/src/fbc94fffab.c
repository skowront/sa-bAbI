#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_3[70];                                   // Tag.BODY
    entity_8 = 36;                                       // Tag.BODY
    for(entity_2 = 11; entity_2 < entity_8; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_2] = 'Z';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER