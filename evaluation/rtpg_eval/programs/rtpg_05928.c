int test_func(void) {
    int v0 = 67;
    int v1 = 23;
    int v2 = 78;
    int v3 = 69;
    int v4 = 41;
    int i;
    v3 = v3 + v3;
    int *__p = &v4;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
