#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    char entity_7[91];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = 31;                                       // Tag.BODY
    if (entity_2 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 50;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 48; entity_5 < entity_2; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_3[90];                                   // Tag.BODY
    entity_4 = 70;                                       // Tag.BODY
    entity_6 = 87;                                       // Tag.BODY
    entity_7[entity_5] = 'd';                            // Tag.BUFWRITE_COND_SAFE
    char entity_9[55];                                   // Tag.BODY
    entity_3[entity_6] = 'j';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_9[entity_4] = 'l';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER