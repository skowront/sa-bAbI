#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_6;                                       // Tag.BODY
    char entity_5[75];                                  // Tag.BODY
    int entity_9;                                       // Tag.BODY
    char entity_8[55];                                  // Tag.BODY
    entity_6 = 3;                                       // Tag.BODY
    int entity_3;                                       // Tag.BODY
    entity_9 = 65;                                      // Tag.BODY
    for(entity_3 = 0; entity_3 < entity_9; entity_3++){ // Tag.BODY
    }                                                   // Tag.BODY
    int entity_7;                                       // Tag.BODY
    char entity_2[84];                                  // Tag.BODY
    entity_7 = 31;                                      // Tag.BODY
    entity_2[entity_7] = 'C';                           // Tag.BUFWRITE_TAUT_SAFE
    entity_5[entity_6] = 'I';                           // Tag.BUFWRITE_TAUT_SAFE
    entity_8[entity_3] = '3';                           // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER