#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    char entity_9[32];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    entity_0 = 95;                                       // Tag.BODY
    int entity_8;                                        // Tag.BODY
    if (entity_3 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 91;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 17; entity_8 < entity_3; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_8] = 't';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER