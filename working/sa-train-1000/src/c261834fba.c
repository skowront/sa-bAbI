#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_0;                                       // Tag.BODY
    char entity_3[31];                                  // Tag.BODY
    int entity_6;                                       // Tag.BODY
    entity_0 = 35;                                      // Tag.BODY
    int entity_1;                                       // Tag.BODY
    char entity_7[59];                                  // Tag.BODY
    entity_6 = 15;                                      // Tag.BODY
    entity_3[entity_0] = 'U';                           // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_1 = 8; entity_1 < entity_6; entity_1++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_7[entity_1] = 'A';                           // Tag.BUFWRITE_COND_SAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER