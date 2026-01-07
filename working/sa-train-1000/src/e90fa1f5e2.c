#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_8 = 41;                                       // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    char entity_6[22];                                   // Tag.BODY
    if (entity_9 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 21;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 73; entity_0 < entity_9; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_0] = 'f';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER