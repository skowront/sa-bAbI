#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_2[14];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_9 = 91;                                       // Tag.BODY
    if (entity_5 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 44;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 12; entity_3 < entity_5; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_0[13];                                   // Tag.BODY
    entity_2[entity_3] = 'Z';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_6 = 71;                                       // Tag.BODY
    entity_0[entity_6] = 'Y';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER