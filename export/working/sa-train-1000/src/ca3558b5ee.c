#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    char entity_4[82];                                  // Tag.BODY
    int entity_0;                                       // Tag.BODY
    int entity_3;                                       // Tag.BODY
    int entity_8;                                       // Tag.BODY
    entity_3 = 62;                                      // Tag.BODY
    entity_0 = rand();                                  // Tag.BODY
    if (entity_0 < entity_3){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_0 = 79;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_8 = 8; entity_8 < entity_0; entity_8++){ // Tag.BODY
    }                                                   // Tag.BODY
    int entity_6;                                       // Tag.BODY
    int entity_2;                                       // Tag.BODY
    entity_6 = 80;                                      // Tag.BODY
    entity_4[entity_8] = '0';                           // Tag.BUFWRITE_COND_SAFE
    char entity_5[51];                                  // Tag.BODY
    entity_2 = 90;                                      // Tag.BODY
    char entity_9[17];                                  // Tag.BODY
    entity_9[entity_6] = 'S';                           // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5[entity_2] = 'i';                           // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER