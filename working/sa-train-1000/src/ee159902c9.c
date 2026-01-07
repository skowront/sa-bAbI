#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    char entity_4[54];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_7 = 6;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 27;                                       // Tag.BODY
    char entity_6[35];                                   // Tag.BODY
    for(entity_1 = 74; entity_1 < entity_2; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_7] = 'g';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_4[entity_1] = 'x';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER