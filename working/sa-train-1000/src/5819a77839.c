#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_9 = 73;                                       // Tag.BODY
    char entity_4[78];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_7 = 29;                                       // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    char entity_1[89];                                   // Tag.BODY
    char entity_5[28];                                   // Tag.BODY
    entity_1[entity_9] = 'A';                            // Tag.BUFWRITE_TAUT_SAFE
    int entity_3;                                        // Tag.BODY
    entity_8 = 4;                                        // Tag.BODY
    if (entity_0 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 86;                                       // Tag.BODY
    entity_5[entity_7] = 'R';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    for(entity_3 = 73; entity_3 < entity_0; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_3] = 'r';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER