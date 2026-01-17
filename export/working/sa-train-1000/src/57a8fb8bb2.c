#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_2;                                       // Tag.BODY
    int entity_1;                                       // Tag.BODY
    char entity_4[54];                                  // Tag.BODY
    entity_2 = 8;                                       // Tag.BODY
    int entity_8;                                       // Tag.BODY
    entity_1 = rand();                                  // Tag.BODY
    if (entity_1 < entity_2){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_1 = 67;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_8 = 3; entity_8 < entity_1; entity_8++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_4[entity_8] = 'q';                           // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER