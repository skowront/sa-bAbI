#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_9[67];                                   // Tag.BODY
    entity_3 = 64;                                       // Tag.BODY
    if (entity_4 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 10;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 41; entity_5 < entity_4; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_5] = 'O';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER