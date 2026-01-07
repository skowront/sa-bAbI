#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    entity_4 = 31;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_6[74];                                   // Tag.BODY
    for(entity_1 = 38; entity_1 < entity_4; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_1] = 'l';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER