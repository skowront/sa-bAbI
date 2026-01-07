#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_7 = 60;                                       // Tag.BODY
    char entity_5[97];                                   // Tag.BODY
    char entity_9[98];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_0 = 14;                                       // Tag.BODY
    for(entity_6 = 64; entity_6 < entity_0; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_6] = 'X';                            // Tag.BUFWRITE_COND_SAFE
    entity_9[entity_7] = 'E';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER