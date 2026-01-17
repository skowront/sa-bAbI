#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_5[67];                                   // Tag.BODY
    entity_2 = 11;                                       // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    if (entity_7 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 13;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 28; entity_3 < entity_7; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_3] = 'I';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER