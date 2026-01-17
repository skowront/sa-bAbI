#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    char entity_8[46];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    entity_6 = 1;                                        // Tag.BODY
    if (entity_0 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 60;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 96; entity_1 < entity_0; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_1] = 'U';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER