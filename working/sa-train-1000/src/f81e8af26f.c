#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    char entity_2[67];                                   // Tag.BODY
    entity_4 = 10;                                       // Tag.BODY
    if (entity_5 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 31;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 84; entity_3 < entity_5; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_3] = 'Y';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER