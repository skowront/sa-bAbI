#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    char entity_4[85];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_3 = 52;                                       // Tag.BODY
    if (entity_5 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 18;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 76; entity_1 < entity_5; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_1] = '9';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER