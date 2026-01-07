#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    char entity_1[12];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_6[29];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_5 = 42;                                       // Tag.BODY
    entity_3 = 88;                                       // Tag.BODY
    entity_1[entity_5] = 'c';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_7 = 69; entity_7 < entity_3; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_7] = 'y';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER