#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_5;                                       // Tag.BODY
    int entity_8;                                       // Tag.BODY
    int entity_2;                                       // Tag.BODY
    entity_2 = rand();                                  // Tag.BODY
    char entity_3[8];                                   // Tag.BODY
    entity_5 = 84;                                      // Tag.BODY
    if (entity_2 < entity_5){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_2 = 46;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_8 = 5; entity_8 < entity_2; entity_8++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_3[entity_8] = 'd';                           // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER