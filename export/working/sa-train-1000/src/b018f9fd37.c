#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    char entity_4[56];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_1 = 74;                                       // Tag.BODY
    entity_8 = rand();                                   // Tag.BODY
    if (entity_8 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8 = 0;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 63; entity_7 < entity_8; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_7] = 'w';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER