#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_8[97];                                   // Tag.BODY
    entity_4 = 67;                                       // Tag.BODY
    for(entity_1 = 73; entity_1 < entity_4; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_1] = '4';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER