#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    char entity_0[26];                                   // Tag.BODY
    entity_9 = 1;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    for(entity_8 = 40; entity_8 < entity_9; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_0[entity_8] = '3';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_4[80];                                   // Tag.BODY
    entity_1 = 28;                                       // Tag.BODY
    entity_4[entity_1] = 'l';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER