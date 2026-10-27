int test_func(void) {
    int v0 = 50;
    int v1 = 20;
    int v2 = 56;
    int v3 = 94;
    int v4 = 14;
    int v5 = 43;
    int i;
    v2 = v2 * 10;
    v5 = v5 - v3;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
