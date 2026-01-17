#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_9[6];                                    // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_4 = 90;                                       // Tag.BODY
    char entity_1[35];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_0 = 7;                                        // Tag.BODY
    for(entity_5 = 96; entity_5 < entity_4; entity_5++){ // Tag.BODY
    entity_1[entity_0] = '6';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_9[entity_5] = 'a';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_6 = 99;                                       // Tag.BODY
    char entity_7[31];                                   // Tag.BODY
    entity_7[entity_6] = 'X';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER