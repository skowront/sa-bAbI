#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_1[0];                                    // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    entity_8 = 89;                                       // Tag.BODY
    if (entity_7 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 49;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 69; entity_3 < entity_7; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_3] = 'r';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER