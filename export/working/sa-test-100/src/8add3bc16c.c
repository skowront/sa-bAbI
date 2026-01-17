#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_8;                                       // Tag.BODY
    int entity_0;                                       // Tag.BODY
    entity_8 = rand();                                  // Tag.BODY
    int entity_5;                                       // Tag.BODY
    entity_0 = 13;                                      // Tag.BODY
    char entity_3[5];                                   // Tag.BODY
    if (entity_8 < entity_0){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_8 = 37;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_5 = 1; entity_5 < entity_8; entity_5++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_3[entity_5] = 'D';                           // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER