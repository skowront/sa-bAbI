#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_1[62];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_4 = 29;                                       // Tag.BODY
    if (entity_0 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 0;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 22; entity_5 < entity_0; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_9[63];                                   // Tag.BODY
    entity_1[entity_5] = 'x';                            // Tag.BUFWRITE_COND_SAFE
    int entity_2;                                        // Tag.BODY
    entity_2 = 87;                                       // Tag.BODY
    entity_9[entity_2] = 'u';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER