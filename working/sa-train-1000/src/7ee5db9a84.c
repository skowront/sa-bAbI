#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_0[67];                                   // Tag.BODY
    entity_9 = 46;                                       // Tag.BODY
    for(entity_1 = 67; entity_1 < entity_9; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_1] = 'I';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_8[71];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_4[52];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 87;                                       // Tag.BODY
    entity_8[entity_3] = 'A';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2 = 40;                                       // Tag.BODY
    entity_4[entity_2] = '1';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER