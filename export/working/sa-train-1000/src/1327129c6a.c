#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    char entity_6[53];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    entity_5 = 65;                                       // Tag.BODY
    if (entity_7 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 58;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 19; entity_9 < entity_7; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_9] = 'J';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER