#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_7[33];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_5 = 45;                                       // Tag.BODY
    for(entity_1 = 72; entity_1 < entity_5; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_4 = 54;                                       // Tag.BODY
    char entity_0[87];                                   // Tag.BODY
    entity_0[entity_4] = 'P';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_7[entity_1] = 'Z';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER