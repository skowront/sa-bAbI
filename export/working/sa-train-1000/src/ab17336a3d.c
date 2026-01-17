#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_9[6];                                    // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_4[81];                                   // Tag.BODY
    entity_6 = 33;                                       // Tag.BODY
    entity_4[entity_6] = 'Y';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_1 = 73;                                       // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    char entity_8[45];                                   // Tag.BODY
    entity_7 = 19;                                       // Tag.BODY
    if (entity_3 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 49;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 81; entity_2 < entity_3; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_2] = 'm';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_8[entity_7] = 'p';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER