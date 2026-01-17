#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_1 = 38;                                       // Tag.BODY
    char entity_9[38];                                   // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    if (entity_3 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 17;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 31; entity_8 < entity_3; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_8] = 'k';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER