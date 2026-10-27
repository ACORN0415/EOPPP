int test_func(void) {
    int v0 = 68;
    int v1 = 84;
    int v2 = 71;
    int v3 = 45;
    int v4 = 14;
    int i;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v2;
    }
    if (v4 > v2) { v4 = v2; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
