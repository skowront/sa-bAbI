#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_4 = 54;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_0[51];                                   // Tag.BODY
    char entity_8[51];                                   // Tag.BODY
    entity_5 = 35;                                       // Tag.BODY
    entity_8[entity_4] = 'L';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_1 = 96; entity_1 < entity_5; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_1] = 'X';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER