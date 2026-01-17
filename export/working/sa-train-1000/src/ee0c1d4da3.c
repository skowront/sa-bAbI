#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_1[26];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_9 = 49;                                       // Tag.BODY
    for(entity_2 = 97; entity_2 < entity_9; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_1[entity_2] = 'X';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_8 = 75;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_4[42];                                   // Tag.BODY
    char entity_3[1];                                    // Tag.BODY
    entity_4[entity_8] = 'K';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6 = 20;                                       // Tag.BODY
    entity_3[entity_6] = 'H';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER