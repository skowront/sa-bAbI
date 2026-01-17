#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_2[74];                                   // Tag.BODY
    entity_3 = 2;                                        // Tag.BODY
    for(entity_5 = 17; entity_5 < entity_3; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_5] = 'Y';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER