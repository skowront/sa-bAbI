#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_1[13];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_4 = 21;                                       // Tag.BODY
    if (entity_3 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 47;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 45; entity_9 < entity_3; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_9] = 'i';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER