#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_7;                                       // Tag.BODY
    int entity_9;                                       // Tag.BODY
    char entity_6[32];                                  // Tag.BODY
    entity_9 = 74;                                      // Tag.BODY
    char entity_0[18];                                  // Tag.BODY
    entity_0[entity_9] = 'L';                           // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_2;                                       // Tag.BODY
    entity_2 = 36;                                      // Tag.BODY
    for(entity_7 = 2; entity_7 < entity_2; entity_7++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_6[entity_7] = '6';                           // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER