#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_5[13];                                   // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_1[14];                                   // Tag.BODY
    entity_9 = 33;                                       // Tag.BODY
    entity_4 = 5;                                        // Tag.BODY
    if (entity_0 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 4;                                        // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_4] = 's';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_6 = 17; entity_6 < entity_0; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_2[89];                                   // Tag.BODY
    entity_1[entity_6] = 'g';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_3;                                        // Tag.BODY
    entity_3 = 49;                                       // Tag.BODY
    entity_2[entity_3] = '3';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER