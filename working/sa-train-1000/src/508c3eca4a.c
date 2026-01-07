#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_2;                                       // Tag.BODY
    int entity_9;                                       // Tag.BODY
    entity_2 = 30;                                      // Tag.BODY
    int entity_5;                                       // Tag.BODY
    entity_5 = rand();                                  // Tag.BODY
    char entity_7[21];                                  // Tag.BODY
    if (entity_5 < entity_2){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_5 = 18;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_9 = 8; entity_9 < entity_5; entity_9++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_7[entity_9] = 'H';                           // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER