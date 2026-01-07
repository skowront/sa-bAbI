#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_7[89];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_1 = 52;                                       // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    if (entity_4 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 76;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 98; entity_9 < entity_4; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_9] = 'T';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER