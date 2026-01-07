#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    char entity_9[12];                                   // Tag.BODY
    entity_7 = 3;                                        // Tag.BODY
    if (entity_1 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 94;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 88; entity_5 < entity_1; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_5] = 'S';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER