#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    entity_6 = 64;                                       // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_1[72];                                   // Tag.BODY
    for(entity_4 = 23; entity_4 < entity_6; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_4] = 'E';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER