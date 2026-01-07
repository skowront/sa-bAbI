#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    entity_3 = 88;                                       // Tag.BODY
    char entity_7[77];                                   // Tag.BODY
    if (entity_2 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 35;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 10; entity_0 < entity_2; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_0] = 'k';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER