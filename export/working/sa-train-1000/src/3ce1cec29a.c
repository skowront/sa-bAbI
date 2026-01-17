#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_8[48];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_7 = 4;                                        // Tag.BODY
    for(entity_5 = 18; entity_5 < entity_7; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_5] = 'l';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER