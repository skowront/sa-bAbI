#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_1[74];                                   // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_5 = 0;                                        // Tag.BODY
    if (entity_9 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 16;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 29; entity_4 < entity_9; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_4] = 'U';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER