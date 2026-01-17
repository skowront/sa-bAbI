#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    entity_7 = 66;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_9[66];                                   // Tag.BODY
    entity_1 = 88;                                       // Tag.BODY
    entity_9[entity_1] = 'B';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_4[55];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    for(entity_5 = 43; entity_5 < entity_7; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 68;                                       // Tag.BODY
    entity_4[entity_5] = 'K';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_3[52];                                   // Tag.BODY
    entity_3[entity_2] = '5';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER