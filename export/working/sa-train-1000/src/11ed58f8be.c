#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_4[81];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_2 = 4;                                        // Tag.BODY
    if (entity_9 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 42;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 29; entity_7 < entity_9; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_7] = 'p';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER