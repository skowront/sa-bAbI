#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    char entity_6[47];                                  // Tag.BODY
    int entity_0;                                       // Tag.BODY
    int entity_7;                                       // Tag.BODY
    int entity_2;                                       // Tag.BODY
    char entity_1[24];                                  // Tag.BODY
    entity_7 = 47;                                      // Tag.BODY
    entity_0 = 49;                                      // Tag.BODY
    for(entity_2 = 0; entity_2 < entity_0; entity_2++){ // Tag.BODY
    entity_1[entity_7] = 'L';                           // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                   // Tag.BODY
    entity_6[entity_2] = 'X';                           // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER