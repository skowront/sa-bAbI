#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    char entity_0[68];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    entity_5 = 0;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    if (entity_9 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 86;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 86; entity_2 < entity_9; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_2] = 'S';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER