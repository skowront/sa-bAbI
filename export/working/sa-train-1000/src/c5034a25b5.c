#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    char entity_6[78];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    char entity_0[47];                                   // Tag.BODY
    entity_9 = 24;                                       // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_2 = 94;                                       // Tag.BODY
    if (entity_7 < entity_2){                            // Tag.BODY
    entity_0[entity_9] = '0';                            // Tag.BUFWRITE_TAUT_SAFE
    } else {                                             // Tag.BODY
    entity_7 = 20;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 45; entity_4 < entity_7; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_1[12];                                   // Tag.BODY
    entity_6[entity_4] = 'b';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_8;                                        // Tag.BODY
    entity_8 = 46;                                       // Tag.BODY
    entity_1[entity_8] = 'Y';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER