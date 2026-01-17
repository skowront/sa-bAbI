#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_8[29];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    entity_4 = 79;                                       // Tag.BODY
    if (entity_1 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 3;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_6 = 23; entity_6 < entity_1; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = 37;                                       // Tag.BODY
    char entity_7[11];                                   // Tag.BODY
    entity_8[entity_6] = 'I';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_7[entity_9] = '6';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER