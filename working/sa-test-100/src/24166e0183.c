#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_2[90];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    char entity_5[6];                                    // Tag.BODY
    entity_7 = 44;                                       // Tag.BODY
    entity_0 = 6;                                        // Tag.BODY
    if (entity_9 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 83;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_6 = 13; entity_6 < entity_9; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_6] = 'L';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_2[entity_0] = 'O';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER