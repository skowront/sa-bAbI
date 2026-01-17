#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_2[42];                                   // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = 96;                                       // Tag.BODY
    if (entity_4 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 82;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 24; entity_5 < entity_4; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_7[5];                                    // Tag.BODY
    entity_2[entity_5] = 'T';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_1;                                        // Tag.BODY
    entity_1 = 21;                                       // Tag.BODY
    entity_7[entity_1] = 'g';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER