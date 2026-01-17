#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_7[34];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_0 = 5;                                        // Tag.BODY
    if (entity_1 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 20;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 19; entity_3 < entity_1; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_3] = 'B';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER