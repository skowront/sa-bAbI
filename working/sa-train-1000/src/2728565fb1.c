#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    char entity_5[59];                                   // Tag.BODY
    char entity_2[18];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_7 = 60;                                       // Tag.BODY
    entity_1 = 18;                                       // Tag.BODY
    if (entity_4 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 61;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 29; entity_3 < entity_4; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_8 = 50;                                       // Tag.BODY
    char entity_6[57];                                   // Tag.BODY
    entity_2[entity_3] = 'k';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_6[entity_8] = 'Z';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_5[entity_1] = 'G';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER