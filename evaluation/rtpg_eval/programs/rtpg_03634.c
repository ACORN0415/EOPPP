int test_func(void) {
    int v0 = 48;
    int v1 = 8;
    int v2 = 32;
    int v3 = 40;
    int v4 = 38;
    int v5 = 94;
    int v6 = 78;
    int i;
    v6 = v6 * 7;
    int *__p = &v5;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
