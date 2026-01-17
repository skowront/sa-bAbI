#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    entity_4 = 88;                                       // Tag.BODY
    char entity_3[76];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_2[55];                                   // Tag.BODY
    entity_0 = 65;                                       // Tag.BODY
    entity_2[entity_4] = 'n';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_7 = 43; entity_7 < entity_0; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_7] = '2';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER