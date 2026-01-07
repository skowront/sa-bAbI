#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    char entity_8[1];                                    // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_1[16];                                   // Tag.BODY
    entity_6 = 96;                                       // Tag.BODY
    entity_4 = 7;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    for(entity_9 = 59; entity_9 < entity_4; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_9] = 'O';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_1[entity_6] = 'O';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER