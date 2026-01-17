#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    char entity_7[91];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_8 = 73;                                       // Tag.BODY
    for(entity_3 = 30; entity_3 < entity_8; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_3] = '8';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER