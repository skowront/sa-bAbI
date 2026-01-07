#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = 20;                                       // Tag.BODY
    char entity_8[46];                                   // Tag.BODY
    char entity_2[38];                                   // Tag.BODY
    entity_5 = 1;                                        // Tag.BODY
    for(entity_0 = 15; entity_0 < entity_9; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_5] = 'I';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_0] = 'O';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER