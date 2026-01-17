#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    entity_6 = 87;                                       // Tag.BODY
    char entity_0[65];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_7[0];                                    // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_5[28];                                   // Tag.BODY
    entity_4 = 45;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = 0;                                        // Tag.BODY
    entity_7[entity_6] = 'o';                            // Tag.BUFWRITE_TAUT_UNSAFE
    if (entity_9 < entity_4){                            // Tag.BODY
    entity_0[entity_1] = '2';                            // Tag.BUFWRITE_TAUT_SAFE
    } else {                                             // Tag.BODY
    entity_9 = 20;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 53; entity_3 < entity_9; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_3] = 't';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER