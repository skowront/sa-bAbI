#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    char entity_8[73];                                   // Tag.BODY
    entity_1 = 42;                                       // Tag.BODY
    int entity_4;                                        // Tag.BODY
    for(entity_4 = 94; entity_4 < entity_1; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_5 = 88;                                       // Tag.BODY
    entity_8[entity_4] = 'T';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_9[35];                                   // Tag.BODY
    entity_9[entity_5] = '5';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER