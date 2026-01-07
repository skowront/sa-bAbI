#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    entity_3 = 35;                                       // Tag.BODY
    char entity_7[97];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    for(entity_0 = 13; entity_0 < entity_3; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_0] = 'u';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER