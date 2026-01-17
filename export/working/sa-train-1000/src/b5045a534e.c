#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    entity_3 = 7;                                        // Tag.BODY
    char entity_0[20];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_8 = rand();                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    if (entity_8 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8 = 82;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 16; entity_4 < entity_8; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_4] = 'f';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER