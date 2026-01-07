#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_2 = 48;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    char entity_8[53];                                   // Tag.BODY
    if (entity_1 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 41;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_6 = 32; entity_6 < entity_1; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_6] = 'Z';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER