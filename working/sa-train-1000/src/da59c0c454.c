#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_3[17];                                   // Tag.BODY
    entity_8 = 92;                                       // Tag.BODY
    for(entity_1 = 46; entity_1 < entity_8; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_1] = 'f';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER