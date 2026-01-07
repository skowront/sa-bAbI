#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    char entity_5[41];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_3[47];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_7 = 35;                                       // Tag.BODY
    entity_1 = 36;                                       // Tag.BODY
    entity_6 = 76;                                       // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    char entity_4[21];                                   // Tag.BODY
    entity_4[entity_7] = 'y';                            // Tag.BUFWRITE_TAUT_UNSAFE
    if (entity_0 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 88;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 42; entity_9 < entity_0; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_9] = 'a';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_3[entity_1] = 'E';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER