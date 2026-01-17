#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_9[29];                                   // Tag.BODY
    entity_5 = 93;                                       // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    if (entity_3 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 0;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_6 = 28; entity_6 < entity_3; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_6] = 'S';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER