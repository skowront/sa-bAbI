#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    char entity_4[21];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_8 = 57;                                       // Tag.BODY
    for(entity_7 = 24; entity_7 < entity_8; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_9[63];                                   // Tag.BODY
    entity_4[entity_7] = '2';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_1 = 74;                                       // Tag.BODY
    entity_9[entity_1] = 'W';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER