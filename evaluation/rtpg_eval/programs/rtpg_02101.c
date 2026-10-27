int test_func(void) {
    int v0 = 49;
    int v1 = 62;
    int v2 = 8;
    int v3 = 60;
    int v4 = 78;
    int i;
    v0 = v0 * 4;
    v0 = v0 + v4;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v3;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    int *__p = &v2;
    *__p = *__p + 1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
