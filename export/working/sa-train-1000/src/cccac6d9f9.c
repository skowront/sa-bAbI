#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    char entity_8[5];                                    // Tag.BODY
    entity_5 = 25;                                       // Tag.BODY
    int entity_0;                                        // Tag.BODY
    for(entity_0 = 24; entity_0 < entity_5; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_4[36];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_8[entity_0] = 'C';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_9[42];                                   // Tag.BODY
    entity_6 = 88;                                       // Tag.BODY
    entity_7 = 20;                                       // Tag.BODY
    entity_4[entity_6] = 'v';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9[entity_7] = 'M';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER