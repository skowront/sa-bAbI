#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_9 = 42;                                       // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    char entity_0[15];                                   // Tag.BODY
    if (entity_2 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 20;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 11; entity_4 < entity_2; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_4] = 'Y';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER