#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    char entity_7[0];                                    // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_9 = 41;                                       // Tag.BODY
    for(entity_3 = 94; entity_3 < entity_9; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_3] = 'R';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER