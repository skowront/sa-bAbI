#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_5;                                       // Tag.BODY
    char entity_3[61];                                  // Tag.BODY
    int entity_1;                                       // Tag.BODY
    entity_5 = 73;                                      // Tag.BODY
    for(entity_1 = 1; entity_1 < entity_5; entity_1++){ // Tag.BODY
    }                                                   // Tag.BODY
    char entity_2[26];                                  // Tag.BODY
    int entity_6;                                       // Tag.BODY
    int entity_9;                                       // Tag.BODY
    entity_3[entity_1] = 'e';                           // Tag.BUFWRITE_COND_UNSAFE
    entity_9 = 51;                                      // Tag.BODY
    entity_6 = 23;                                      // Tag.BODY
    entity_2[entity_9] = 't';                           // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_7[16];                                  // Tag.BODY
    entity_7[entity_6] = 'P';                           // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER