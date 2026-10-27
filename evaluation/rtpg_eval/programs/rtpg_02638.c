int test_func(void) {
    int v0 = 24;
    int v1 = 2;
    int v2 = 12;
    int v3 = 29;
    int v4 = 28;
    int v5 = 71;
    int v6 = 88;
    int i;
    for (i = 0; i < 7; i++) {
        v1 = v1 + v5;
    }
    v5 = v5 - v1;
    v1 = v1 & v3;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
