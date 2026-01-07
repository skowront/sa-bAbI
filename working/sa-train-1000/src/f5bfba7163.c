#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    entity_1 = 70;                                       // Tag.BODY
    char entity_7[89];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    for(entity_0 = 55; entity_0 < entity_1; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_0] = 'O';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER