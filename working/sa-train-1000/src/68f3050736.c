#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    char entity_3[92];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_8 = rand();                                   // Tag.BODY
    entity_6 = 95;                                       // Tag.BODY
    if (entity_8 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8 = 18;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 67; entity_1 < entity_8; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_1] = 'Q';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER