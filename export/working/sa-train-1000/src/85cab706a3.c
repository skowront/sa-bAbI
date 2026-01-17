#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_6[15];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    entity_2 = 89;                                       // Tag.BODY
    if (entity_3 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 88;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 54; entity_9 < entity_3; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_0 = 2;                                        // Tag.BODY
    entity_6[entity_9] = 'n';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_5[32];                                   // Tag.BODY
    entity_5[entity_0] = '7';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER