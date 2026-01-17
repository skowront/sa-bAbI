#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_9[26];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_5 = 96;                                       // Tag.BODY
    entity_2 = 82;                                       // Tag.BODY
    char entity_7[67];                                   // Tag.BODY
    for(entity_3 = 57; entity_3 < entity_5; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_2] = '2';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7[entity_3] = 'H';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER