#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    char entity_5[15];                                  // Tag.BODY
    int entity_7;                                       // Tag.BODY
    int entity_0;                                       // Tag.BODY
    int entity_9;                                       // Tag.BODY
    entity_9 = 50;                                      // Tag.BODY
    entity_0 = rand();                                  // Tag.BODY
    if (entity_0 < entity_9){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_0 = 23;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_7 = 6; entity_7 < entity_0; entity_7++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_5[entity_7] = 'q';                           // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER