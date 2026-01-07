#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_4[41];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_3 = 5;                                        // Tag.BODY
    for(entity_6 = 59; entity_6 < entity_3; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_8[95];                                   // Tag.BODY
    entity_4[entity_6] = 'h';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_5 = 87;                                       // Tag.BODY
    entity_8[entity_5] = 'o';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER