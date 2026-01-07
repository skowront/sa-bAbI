#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_0[45];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = 20;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    for(entity_1 = 65; entity_1 < entity_9; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_1] = 'p';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER