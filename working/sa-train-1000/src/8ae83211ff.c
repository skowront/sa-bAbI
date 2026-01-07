#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_8[12];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_2 = 71;                                       // Tag.BODY
    for(entity_9 = 45; entity_9 < entity_2; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_8[entity_9] = 'x';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_5[88];                                   // Tag.BODY
    entity_1 = 16;                                       // Tag.BODY
    entity_5[entity_1] = '2';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER