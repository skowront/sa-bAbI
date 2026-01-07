#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    char entity_1[24];                                   // Tag.BODY
    entity_8 = 38;                                       // Tag.BODY
    int entity_9;                                        // Tag.BODY
    for(entity_9 = 79; entity_9 < entity_8; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_9] = 'R';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER