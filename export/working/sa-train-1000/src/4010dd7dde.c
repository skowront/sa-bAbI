#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_3[77];                                   // Tag.BODY
    char entity_1[1];                                    // Tag.BODY
    entity_2 = 73;                                       // Tag.BODY
    entity_3[entity_2] = 'E';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_4 = 58;                                       // Tag.BODY
    for(entity_9 = 73; entity_9 < entity_4; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_9] = 'a';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER