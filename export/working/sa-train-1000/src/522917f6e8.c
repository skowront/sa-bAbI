#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_5[38];                                   // Tag.BODY
    char entity_3[89];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_7[85];                                   // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_8 = 66;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_2 = 97;                                       // Tag.BODY
    entity_6 = 58;                                       // Tag.BODY
    entity_5[entity_2] = 'b';                            // Tag.BUFWRITE_TAUT_UNSAFE
    if (entity_4 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 27;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 39; entity_1 < entity_4; entity_1++){ // Tag.BODY
    entity_3[entity_6] = '1';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    entity_7[entity_1] = 'p';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER