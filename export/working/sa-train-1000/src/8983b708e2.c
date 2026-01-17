#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_4[72];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_8 = 40;                                       // Tag.BODY
    for(entity_9 = 45; entity_9 < entity_8; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_2[33];                                   // Tag.BODY
    entity_4[entity_9] = 'N';                            // Tag.BUFWRITE_COND_SAFE
    char entity_7[92];                                   // Tag.BODY
    entity_6 = 65;                                       // Tag.BODY
    entity_0 = 94;                                       // Tag.BODY
    entity_2[entity_6] = '8';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7[entity_0] = 'g';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER