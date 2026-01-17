#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_9;                                       // Tag.BODY
    char entity_5[20];                                  // Tag.BODY
    char entity_2[20];                                  // Tag.BODY
    int entity_6;                                       // Tag.BODY
    int entity_1;                                       // Tag.BODY
    int entity_3;                                       // Tag.BODY
    entity_3 = 4;                                       // Tag.BODY
    entity_1 = rand();                                  // Tag.BODY
    entity_9 = 18;                                      // Tag.BODY
    if (entity_1 < entity_3){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_1 = 55;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_6 = 8; entity_6 < entity_1; entity_6++){ // Tag.BODY
    entity_2[entity_9] = '0';                           // Tag.BUFWRITE_TAUT_SAFE
    }                                                   // Tag.BODY
    int entity_0;                                       // Tag.BODY
    entity_0 = 63;                                      // Tag.BODY
    char entity_4[25];                                  // Tag.BODY
    entity_5[entity_6] = 'D';                           // Tag.BUFWRITE_COND_UNSAFE
    entity_4[entity_0] = 'P';                           // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER