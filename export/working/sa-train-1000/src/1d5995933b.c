#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_0[42];                                   // Tag.BODY
    entity_6 = 68;                                       // Tag.BODY
    for(entity_1 = 71; entity_1 < entity_6; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_1] = 'q';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER