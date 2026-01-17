#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_5[79];                                   // Tag.BODY
    entity_1 = 68;                                       // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    if (entity_0 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 22;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 87; entity_8 < entity_0; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_8] = '1';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER