#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    char entity_0[31];                                   // Tag.BODY
    entity_7 = 43;                                       // Tag.BODY
    if (entity_6 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 39;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 80; entity_9 < entity_6; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_9] = 'x';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER