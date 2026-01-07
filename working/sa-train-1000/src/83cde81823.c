#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_2[81];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_8 = 61;                                       // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    if (entity_6 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 85;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 15; entity_0 < entity_6; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_0] = 'A';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER