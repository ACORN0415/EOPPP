int test_func(void) {
    int v0 = 99;
    int v1 = 69;
    int v2 = 36;
    int v3 = 28;
    int v4 = 42;
    int v5 = 36;
    int v6 = 28;
    int v7 = 49;
    int i;
    v2 = v2 - v5;
    v4 = 60;
    v7 = v7 * 5;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    int *__p = &v6;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
