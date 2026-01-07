#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    char entity_8[52];                                   // Tag.BODY
    entity_6 = 78;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    for(entity_2 = 31; entity_2 < entity_6; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_1[83];                                   // Tag.BODY
    char entity_3[45];                                   // Tag.BODY
    entity_8[entity_2] = 'F';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_4 = 35;                                       // Tag.BODY
    entity_1[entity_4] = 'C';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_5 = 56;                                       // Tag.BODY
    entity_3[entity_5] = 'X';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER