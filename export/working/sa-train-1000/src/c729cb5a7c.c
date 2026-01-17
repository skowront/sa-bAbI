#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_1[98];                                   // Tag.BODY
    entity_5 = 52;                                       // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    if (entity_3 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 33;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 20; entity_0 < entity_3; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_0] = 'l';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER