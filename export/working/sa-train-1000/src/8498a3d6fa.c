#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    char entity_8[49];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_9 = 36;                                       // Tag.BODY
    for(entity_7 = 64; entity_7 < entity_9; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_7] = 'X';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER