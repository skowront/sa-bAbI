#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_6[28];                                   // Tag.BODY
    entity_3 = 57;                                       // Tag.BODY
    char entity_8[69];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_7 = 22;                                       // Tag.BODY
    for(entity_2 = 16; entity_2 < entity_3; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_7] = '0';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_6[entity_2] = 'c';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER