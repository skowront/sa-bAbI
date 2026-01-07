#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_4 = 39;                                       // Tag.BODY
    char entity_3[61];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_5[70];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_0[26];                                   // Tag.BODY
    entity_3[entity_4] = 'X';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_7 = 54;                                       // Tag.BODY
    entity_2 = 69;                                       // Tag.BODY
    for(entity_1 = 99; entity_1 < entity_2; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_7] = 'F';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_0[entity_1] = 's';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER