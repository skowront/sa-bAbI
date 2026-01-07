#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    char entity_3[89];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_7 = 49;                                       // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_8[65];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_5 = 47;                                       // Tag.BODY
    entity_9 = 20;                                       // Tag.BODY
    entity_8[entity_7] = 'I';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_6 = rand();                                   // Tag.BODY
    char entity_0[19];                                   // Tag.BODY
    if (entity_6 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 96;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 75; entity_2 < entity_6; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_5] = 'N';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_0[entity_2] = '9';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER