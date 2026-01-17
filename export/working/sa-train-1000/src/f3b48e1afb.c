#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_9 = 42;                                       // Tag.BODY
    char entity_8[34];                                   // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    if (entity_7 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 70;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 71; entity_5 < entity_7; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_5] = 'v';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER