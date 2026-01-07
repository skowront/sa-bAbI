#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    char entity_4[76];                                  // Tag.BODY
    int entity_6;                                       // Tag.BODY
    int entity_7;                                       // Tag.BODY
    char entity_8[10];                                  // Tag.BODY
    entity_7 = 10;                                      // Tag.BODY
    int entity_0;                                       // Tag.BODY
    entity_6 = 71;                                      // Tag.BODY
    for(entity_0 = 3; entity_0 < entity_7; entity_0++){ // Tag.BODY
    entity_4[entity_6] = 'M';                           // Tag.BUFWRITE_TAUT_SAFE
    }                                                   // Tag.BODY
    int entity_9;                                       // Tag.BODY
    entity_9 = 54;                                      // Tag.BODY
    char entity_1[6];                                   // Tag.BODY
    entity_1[entity_9] = 'E';                           // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8[entity_0] = 'A';                           // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER