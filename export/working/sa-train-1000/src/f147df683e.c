#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_5[14];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_6[29];                                   // Tag.BODY
    entity_9 = 7;                                        // Tag.BODY
    entity_1 = 22;                                       // Tag.BODY
    entity_8 = rand();                                   // Tag.BODY
    if (entity_8 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8 = 68;                                       // Tag.BODY
    entity_6[entity_9] = 'J';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    for(entity_4 = 64; entity_4 < entity_8; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_3[17];                                   // Tag.BODY
    entity_5[entity_4] = 'O';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_7 = 37;                                       // Tag.BODY
    entity_3[entity_7] = 'y';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER