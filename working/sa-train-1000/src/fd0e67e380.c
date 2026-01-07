#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_6[64];                                   // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    char entity_9[98];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_4 = 91;                                       // Tag.BODY
    entity_3 = 94;                                       // Tag.BODY
    if (entity_2 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 99;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 72; entity_7 < entity_2; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_5[55];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_6[entity_7] = 'd';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_9[entity_3] = 'W';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_8 = 8;                                        // Tag.BODY
    entity_5[entity_8] = 'T';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER