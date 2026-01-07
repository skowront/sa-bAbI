#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    char entity_5[69];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = 83;                                       // Tag.BODY
    for(entity_1 = 18; entity_1 < entity_6; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_1] = 'w';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER