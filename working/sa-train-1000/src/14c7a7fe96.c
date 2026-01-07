#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    char entity_6[65];                                   // Tag.BODY
    entity_9 = 76;                                       // Tag.BODY
    int entity_8;                                        // Tag.BODY
    if (entity_7 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 87;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 43; entity_8 < entity_7; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_0[86];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_6[entity_8] = 'S';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_3 = 41;                                       // Tag.BODY
    entity_0[entity_3] = 'u';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER