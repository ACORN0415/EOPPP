int test_func(void) {
    int v0 = 47;
    int v1 = 97;
    int v2 = 17;
    int v3 = 38;
    int v4 = 91;
    int v5 = 78;
    int i;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v2;
    }
    v1 = v1 * 8;
    int *__p = &v3;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
