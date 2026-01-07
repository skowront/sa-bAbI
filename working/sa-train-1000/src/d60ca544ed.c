#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_4 = 42;                                       // Tag.BODY
    char entity_2[71];                                   // Tag.BODY
    for(entity_3 = 87; entity_3 < entity_4; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_7[21];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_2[entity_3] = 'a';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_1 = 12;                                       // Tag.BODY
    entity_7[entity_1] = 'n';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER