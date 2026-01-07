#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_5[16];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_0[27];                                   // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    entity_9 = 61;                                       // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 41;                                       // Tag.BODY
    if (entity_7 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 60;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 55; entity_2 < entity_7; entity_2++){ // Tag.BODY
    entity_0[entity_9] = '4';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    char entity_6[91];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = 59;                                       // Tag.BODY
    entity_5[entity_2] = '0';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_6[entity_1] = 'Q';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER