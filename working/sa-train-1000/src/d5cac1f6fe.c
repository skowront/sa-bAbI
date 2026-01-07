#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_4[1];                                    // Tag.BODY
    entity_5 = 46;                                       // Tag.BODY
    for(entity_1 = 91; entity_1 < entity_5; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = 25;                                       // Tag.BODY
    char entity_7[48];                                   // Tag.BODY
    entity_4[entity_1] = 's';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_3[34];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_3[entity_9] = 'b';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_0 = 67;                                       // Tag.BODY
    entity_7[entity_0] = 'U';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER