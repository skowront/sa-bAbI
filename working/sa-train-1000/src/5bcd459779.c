#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    char entity_5[15];                                  // Tag.BODY
    int entity_0;                                       // Tag.BODY
    char entity_3[25];                                  // Tag.BODY
    int entity_8;                                       // Tag.BODY
    int entity_2;                                       // Tag.BODY
    entity_8 = 99;                                      // Tag.BODY
    entity_2 = 47;                                      // Tag.BODY
    entity_5[entity_8] = 'P';                           // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_0 = 1; entity_0 < entity_2; entity_0++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_3[entity_0] = 'p';                           // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER