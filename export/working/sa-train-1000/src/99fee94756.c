#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_7 = 16;                                       // Tag.BODY
    char entity_8[79];                                   // Tag.BODY
    for(entity_3 = 15; entity_3 < entity_7; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_3] = 'k';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER