#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    char entity_5[51];                                   // Tag.BODY
    char entity_1[12];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = 46;                                       // Tag.BODY
    entity_9 = 79;                                       // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_1[entity_9] = 'b';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_8 = 23; entity_8 < entity_6; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_8] = 'o';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER