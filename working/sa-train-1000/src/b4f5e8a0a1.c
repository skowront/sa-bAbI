#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_0[52];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_7 = 87;                                       // Tag.BODY
    if (entity_9 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 92;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 52; entity_1 < entity_9; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 98;                                       // Tag.BODY
    entity_0[entity_1] = 'h';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_4[91];                                   // Tag.BODY
    entity_4[entity_2] = 'c';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER