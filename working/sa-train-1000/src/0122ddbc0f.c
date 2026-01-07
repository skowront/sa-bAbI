#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_8[4];                                    // Tag.BODY
    entity_1 = 49;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    if (entity_7 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 17;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 13; entity_5 < entity_7; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_8[entity_5] = '8';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_4[87];                                   // Tag.BODY
    char entity_6[90];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 87;                                       // Tag.BODY
    entity_0 = 30;                                       // Tag.BODY
    entity_4[entity_0] = 'c';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_6[entity_3] = 'h';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER