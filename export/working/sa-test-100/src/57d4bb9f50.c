#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_0;                                       // Tag.BODY
    int entity_5;                                       // Tag.BODY
    int entity_3;                                       // Tag.BODY
    entity_0 = 10;                                      // Tag.BODY
    char entity_7[2];                                   // Tag.BODY
    entity_5 = rand();                                  // Tag.BODY
    if (entity_5 < entity_0){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_5 = 57;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_3 = 1; entity_3 < entity_5; entity_3++){ // Tag.BODY
    }                                                   // Tag.BODY
    char entity_8[37];                                  // Tag.BODY
    entity_7[entity_3] = 'M';                           // Tag.BUFWRITE_COND_UNSAFE
    int entity_2;                                       // Tag.BODY
    entity_2 = 8;                                       // Tag.BODY
    entity_8[entity_2] = 'a';                           // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER