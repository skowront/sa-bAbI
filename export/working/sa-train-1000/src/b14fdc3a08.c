#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_7[89];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    char entity_1[98];                                   // Tag.BODY
    entity_8 = 40;                                       // Tag.BODY
    entity_0 = 93;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    if (entity_3 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 67;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 92; entity_2 < entity_3; entity_2++){ // Tag.BODY
    entity_7[entity_8] = 'a';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_1[entity_2] = 'b';                            // Tag.BUFWRITE_COND_SAFE
    entity_9 = 0;                                        // Tag.BODY
    char entity_6[93];                                   // Tag.BODY
    entity_6[entity_9] = 'w';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER