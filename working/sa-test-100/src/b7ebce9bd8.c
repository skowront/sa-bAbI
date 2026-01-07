#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_5[26];                                   // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_8 = 30;                                       // Tag.BODY
    if (entity_6 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 12;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 35; entity_7 < entity_6; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_1[9];                                    // Tag.BODY
    entity_5[entity_7] = 'K';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_2 = 70;                                       // Tag.BODY
    char entity_4[95];                                   // Tag.BODY
    entity_1[entity_2] = 'k';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3 = 4;                                        // Tag.BODY
    entity_4[entity_3] = '1';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER