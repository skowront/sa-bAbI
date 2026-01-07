#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    char entity_0[58];                                  // Tag.BODY
    int entity_7;                                       // Tag.BODY
    int entity_4;                                       // Tag.BODY
    int entity_3;                                       // Tag.BODY
    entity_4 = 75;                                      // Tag.BODY
    entity_7 = rand();                                  // Tag.BODY
    if (entity_7 < entity_4){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_7 = 46;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_3 = 3; entity_3 < entity_7; entity_3++){ // Tag.BODY
    }                                                   // Tag.BODY
    int entity_2;                                       // Tag.BODY
    entity_2 = 70;                                      // Tag.BODY
    entity_0[entity_3] = '5';                           // Tag.BUFWRITE_COND_UNSAFE
    char entity_8[78];                                  // Tag.BODY
    entity_8[entity_2] = 'v';                           // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER