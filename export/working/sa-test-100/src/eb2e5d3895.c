#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_7;                                       // Tag.BODY
    entity_7 = 29;                                      // Tag.BODY
    int entity_6;                                       // Tag.BODY
    char entity_9[98];                                  // Tag.BODY
    for(entity_6 = 6; entity_6 < entity_7; entity_6++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_9[entity_6] = 'Y';                           // Tag.BUFWRITE_COND_SAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER