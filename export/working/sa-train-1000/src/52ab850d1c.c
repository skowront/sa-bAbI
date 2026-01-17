#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_2[91];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = 47;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    for(entity_1 = 78; entity_1 < entity_6; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_1] = '9';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER