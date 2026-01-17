#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_1[79];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    entity_8 = 28;                                       // Tag.BODY
    if (entity_9 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 69;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 91; entity_4 < entity_9; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_4] = 'U';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER