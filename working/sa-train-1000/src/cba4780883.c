#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_3[76];                                   // Tag.BODY
    entity_9 = 36;                                       // Tag.BODY
    char entity_6[57];                                   // Tag.BODY
    entity_2 = 11;                                       // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    if (entity_4 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 36;                                       // Tag.BODY
    entity_3[entity_2] = 'H';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    for(entity_8 = 57; entity_8 < entity_4; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_8] = '1';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER