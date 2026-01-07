#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    char entity_5[4];                                    // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_7[9];                                    // Tag.BODY
    entity_3 = 4;                                        // Tag.BODY
    entity_0 = 83;                                       // Tag.BODY
    for(entity_6 = 81; entity_6 < entity_0; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_3] = 'p';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7[entity_6] = 'z';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER