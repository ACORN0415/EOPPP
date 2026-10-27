int test_func(void) {
    int v0 = 81;
    int v1 = 49;
    int v2 = 41;
    int v3 = 85;
    int v4 = 88;
    int v5 = 94;
    int i;
    v1 = 87;
    int *__p = &v3;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
