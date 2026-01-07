#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    entity_8 = 98;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_9[26];                                   // Tag.BODY
    if (entity_3 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 6;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_6 = 63; entity_6 < entity_3; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_6] = 'H';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER