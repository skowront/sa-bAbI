#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_9[1];                                    // Tag.BODY
    entity_3 = 83;                                       // Tag.BODY
    char entity_7[9];                                    // Tag.BODY
    entity_1 = 56;                                       // Tag.BODY
    int entity_0;                                        // Tag.BODY
    for(entity_0 = 69; entity_0 < entity_3; entity_0++){ // Tag.BODY
    entity_9[entity_1] = '5';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_7[entity_0] = 'd';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER