#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_8[46];                                   // Tag.BODY
    entity_5 = 5;                                        // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    entity_3 = 44;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_9[92];                                   // Tag.BODY
    if (entity_2 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 23;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 43; entity_1 < entity_2; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_1] = 'h';                            // Tag.BUFWRITE_COND_SAFE
    char entity_0[67];                                   // Tag.BODY
    entity_9[entity_3] = 'H';                            // Tag.BUFWRITE_TAUT_SAFE
    int entity_4;                                        // Tag.BODY
    entity_4 = 84;                                       // Tag.BODY
    entity_0[entity_4] = 'X';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER