#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_7[94];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_5 = 10;                                       // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    entity_3 = 47;                                       // Tag.BODY
    char entity_8[33];                                   // Tag.BODY
    if (entity_6 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 7;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 89; entity_4 < entity_6; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_0[8];                                    // Tag.BODY
    entity_8[entity_4] = 't';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_1;                                        // Tag.BODY
    entity_7[entity_5] = 'y';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_1 = 57;                                       // Tag.BODY
    entity_0[entity_1] = 'l';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER