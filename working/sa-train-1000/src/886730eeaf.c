#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_2;                                       // Tag.BODY
    int entity_1;                                       // Tag.BODY
    char entity_3[61];                                  // Tag.BODY
    char entity_0[63];                                  // Tag.BODY
    entity_1 = rand();                                  // Tag.BODY
    int entity_7;                                       // Tag.BODY
    entity_2 = 48;                                      // Tag.BODY
    entity_7 = 34;                                      // Tag.BODY
    int entity_6;                                       // Tag.BODY
    if (entity_1 < entity_2){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_0[entity_7] = 'Z';                           // Tag.BUFWRITE_TAUT_SAFE
    entity_1 = 31;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_6 = 5; entity_6 < entity_1; entity_6++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_3[entity_6] = 'D';                           // Tag.BUFWRITE_COND_SAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER