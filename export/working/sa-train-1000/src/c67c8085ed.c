#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    char entity_3[39];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = 6;                                        // Tag.BODY
    for(entity_9 = 59; entity_9 < entity_1; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_9] = 'P';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER