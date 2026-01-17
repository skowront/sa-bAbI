#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_8[92];                                   // Tag.BODY
    entity_3 = 64;                                       // Tag.BODY
    for(entity_0 = 95; entity_0 < entity_3; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_5[90];                                   // Tag.BODY
    entity_8[entity_0] = 'f';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_1;                                        // Tag.BODY
    entity_1 = 66;                                       // Tag.BODY
    entity_5[entity_1] = 'L';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER