#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_9[53];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_5[59];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_6 = 76;                                       // Tag.BODY
    entity_0 = 83;                                       // Tag.BODY
    char entity_2[55];                                   // Tag.BODY
    entity_1 = 26;                                       // Tag.BODY
    for(entity_7 = 92; entity_7 < entity_0; entity_7++){ // Tag.BODY
    entity_5[entity_6] = 'c';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_9[entity_1] = 'E';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_7] = 'H';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER