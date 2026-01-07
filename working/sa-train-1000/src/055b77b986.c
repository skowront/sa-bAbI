#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    char entity_3[9];                                    // Tag.BODY
    entity_2 = 45;                                       // Tag.BODY
    if (entity_0 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 42;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 35; entity_8 < entity_0; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_8] = 'Q';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER