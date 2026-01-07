#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    char entity_4[58];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_3[56];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_9 = 52;                                       // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    entity_5 = 32;                                       // Tag.BODY
    if (entity_2 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 3;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 17; entity_7 < entity_2; entity_7++){ // Tag.BODY
    entity_3[entity_5] = 'Q';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    entity_4[entity_7] = '0';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER