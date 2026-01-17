#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_8[41];                                   // Tag.BODY
    entity_0 = 76;                                       // Tag.BODY
    for(entity_1 = 45; entity_1 < entity_0; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_1] = 'f';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER