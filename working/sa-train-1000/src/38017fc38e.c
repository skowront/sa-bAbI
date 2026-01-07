#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    char entity_0[6];                                    // Tag.BODY
    char entity_7[84];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_8 = 90;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    entity_4 = 50;                                       // Tag.BODY
    entity_0[entity_4] = 'g';                            // Tag.BUFWRITE_TAUT_UNSAFE
    if (entity_9 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 21;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 55; entity_2 < entity_9; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_1[72];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_7[entity_2] = '5';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_3 = 0;                                        // Tag.BODY
    entity_1[entity_3] = '0';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER