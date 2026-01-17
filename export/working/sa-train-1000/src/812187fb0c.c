#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_2[94];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_5 = 27;                                       // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_2[entity_5] = 'Z';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_4 = rand();                                   // Tag.BODY
    entity_1 = 73;                                       // Tag.BODY
    char entity_9[87];                                   // Tag.BODY
    if (entity_4 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 6;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 11; entity_7 < entity_4; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 94;                                       // Tag.BODY
    entity_9[entity_7] = 'n';                            // Tag.BUFWRITE_COND_SAFE
    char entity_6[47];                                   // Tag.BODY
    entity_6[entity_3] = 'F';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER