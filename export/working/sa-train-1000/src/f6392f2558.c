#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    char entity_0[19];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_9 = 44;                                       // Tag.BODY
    if (entity_2 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 74;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 19; entity_3 < entity_2; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_3] = 'U';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER