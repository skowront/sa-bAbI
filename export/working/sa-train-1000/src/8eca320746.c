#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_2;                                       // Tag.BODY
    int entity_1;                                       // Tag.BODY
    entity_2 = 95;                                      // Tag.BODY
    int entity_9;                                       // Tag.BODY
    char entity_3[26];                                  // Tag.BODY
    entity_1 = 58;                                      // Tag.BODY
    char entity_5[39];                                  // Tag.BODY
    for(entity_9 = 6; entity_9 < entity_1; entity_9++){ // Tag.BODY
    }                                                   // Tag.BODY
    int entity_8;                                       // Tag.BODY
    entity_3[entity_9] = 'e';                           // Tag.BUFWRITE_COND_UNSAFE
    char entity_0[54];                                  // Tag.BODY
    entity_8 = 15;                                      // Tag.BODY
    entity_5[entity_2] = 'e';                           // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0[entity_8] = 'g';                           // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER