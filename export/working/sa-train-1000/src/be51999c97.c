#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_6[35];                                   // Tag.BODY
    entity_7 = 37;                                       // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    char entity_0[37];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_4 = 9;                                        // Tag.BODY
    if (entity_1 < entity_7){                            // Tag.BODY
    entity_0[entity_4] = 't';                            // Tag.BUFWRITE_TAUT_SAFE
    } else {                                             // Tag.BODY
    entity_1 = 28;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 52; entity_9 < entity_1; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_9] = 'n';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER