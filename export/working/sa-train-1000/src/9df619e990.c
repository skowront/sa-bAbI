#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_2;                                       // Tag.BODY
    int entity_6;                                       // Tag.BODY
    entity_2 = 42;                                      // Tag.BODY
    entity_6 = rand();                                  // Tag.BODY
    int entity_1;                                       // Tag.BODY
    char entity_7[4];                                   // Tag.BODY
    if (entity_6 < entity_2){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_6 = 55;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_1 = 0; entity_1 < entity_6; entity_1++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_7[entity_1] = 'r';                           // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER