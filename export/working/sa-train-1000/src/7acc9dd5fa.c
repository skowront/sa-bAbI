#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    char entity_8[61];                                   // Tag.BODY
    char entity_5[89];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_0 = 58;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_1 = 22;                                       // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_9[0];                                    // Tag.BODY
    entity_2 = 53;                                       // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    entity_5[entity_2] = 'g';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_8[entity_1] = 'A';                            // Tag.BUFWRITE_TAUT_SAFE
    if (entity_3 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 3;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 32; entity_4 < entity_3; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_4] = 'B';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER