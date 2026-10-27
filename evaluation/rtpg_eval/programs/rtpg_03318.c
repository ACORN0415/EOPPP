int test_func(void) {
    int v0 = 72;
    int v1 = 22;
    int v2 = 90;
    int v3 = 38;
    int i;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v2;
    }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
