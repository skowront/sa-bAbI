#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_8 = 28;                                       // Tag.BODY
    entity_5 = 63;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_3[40];                                   // Tag.BODY
    char entity_7[32];                                   // Tag.BODY
    for(entity_6 = 79; entity_6 < entity_5; entity_6++){ // Tag.BODY
    entity_7[entity_8] = '5';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_3[entity_6] = 'u';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_0 = 25;                                       // Tag.BODY
    char entity_2[72];                                   // Tag.BODY
    entity_2[entity_0] = 'w';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER