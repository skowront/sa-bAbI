#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_4[41];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_8 = 87;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    if (entity_0 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 21;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 81; entity_5 < entity_0; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_5] = 'd';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER