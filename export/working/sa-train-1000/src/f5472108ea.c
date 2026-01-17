#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_8 = 36;                                       // Tag.BODY
    char entity_7[44];                                   // Tag.BODY
    for(entity_1 = 63; entity_1 < entity_8; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_1] = 'x';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER