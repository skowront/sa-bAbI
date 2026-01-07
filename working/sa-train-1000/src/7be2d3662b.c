#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_7[79];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_4 = 78;                                       // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    if (entity_9 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 18;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 75; entity_1 < entity_9; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_1] = 'm';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER