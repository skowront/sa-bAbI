#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_8[12];                                   // Tag.BODY
    entity_2 = 59;                                       // Tag.BODY
    entity_1 = 40;                                       // Tag.BODY
    char entity_9[45];                                   // Tag.BODY
    for(entity_3 = 32; entity_3 < entity_2; entity_3++){ // Tag.BODY
    entity_8[entity_1] = '9';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_9[entity_3] = 'g';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER