#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_2 = 93;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_0[81];                                   // Tag.BODY
    char entity_3[45];                                   // Tag.BODY
    entity_7 = 62;                                       // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    entity_5 = 68;                                       // Tag.BODY
    char entity_1[68];                                   // Tag.BODY
    entity_3[entity_5] = 'B';                            // Tag.BUFWRITE_TAUT_UNSAFE
    if (entity_6 < entity_7){                            // Tag.BODY
    entity_0[entity_2] = 'h';                            // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                                             // Tag.BODY
    entity_6 = 5;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 64; entity_8 < entity_6; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_8] = 'k';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER