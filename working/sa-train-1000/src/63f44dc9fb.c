#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_5[92];                                   // Tag.BODY
    char entity_2[16];                                   // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = 58;                                       // Tag.BODY
    char entity_9[70];                                   // Tag.BODY
    entity_4 = 23;                                       // Tag.BODY
    entity_8 = 74;                                       // Tag.BODY
    entity_2[entity_8] = 'H';                            // Tag.BUFWRITE_TAUT_UNSAFE
    if (entity_3 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 32;                                       // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_1] = 'O';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_0 = 69; entity_0 < entity_3; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_0] = '1';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER