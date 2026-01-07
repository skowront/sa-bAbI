#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    char entity_6[16];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_8[87];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_3 = 21;                                       // Tag.BODY
    entity_4 = 73;                                       // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    entity_8[entity_4] = 'J';                            // Tag.BUFWRITE_TAUT_SAFE
    if (entity_1 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 3;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 18; entity_9 < entity_1; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_9] = 'm';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER