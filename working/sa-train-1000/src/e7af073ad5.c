#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    char entity_1[39];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_5 = 12;                                       // Tag.BODY
    for(entity_0 = 79; entity_0 < entity_5; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_0] = 'g';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER