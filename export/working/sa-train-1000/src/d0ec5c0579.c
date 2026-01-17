#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_0[98];                                   // Tag.BODY
    entity_6 = 98;                                       // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    if (entity_1 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 91;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 36; entity_4 < entity_1; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_7[31];                                   // Tag.BODY
    entity_0[entity_4] = 'T';                            // Tag.BUFWRITE_COND_SAFE
    entity_3 = 95;                                       // Tag.BODY
    entity_7[entity_3] = 'b';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER