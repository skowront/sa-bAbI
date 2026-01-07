#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    entity_2 = 92;                                       // Tag.BODY
    char entity_4[78];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    if (entity_5 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 36;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 35; entity_3 < entity_5; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_3] = 'x';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER