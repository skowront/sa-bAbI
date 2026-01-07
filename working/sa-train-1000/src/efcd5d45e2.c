#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_6[4];                                    // Tag.BODY
    entity_0 = 93;                                       // Tag.BODY
    for(entity_5 = 54; entity_5 < entity_0; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_5] = 'M';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER