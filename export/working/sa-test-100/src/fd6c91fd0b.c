#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_3[90];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_5 = 51;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    if (entity_1 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 13;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 95; entity_7 < entity_1; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_7] = 'n';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER