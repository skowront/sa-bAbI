#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_1[66];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_2 = 8;                                        // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    if (entity_0 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 39;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 86; entity_7 < entity_0; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_7] = 'k';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER