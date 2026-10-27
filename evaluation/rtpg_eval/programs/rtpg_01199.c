int test_func(void) {
    int v0 = 99;
    int v1 = 0;
    int v2 = 53;
    int v3 = 53;
    int v4 = 91;
    int v5 = 53;
    int v6 = 98;
    int i;
    v4 = v4 - v2;
    int *__p = &v1;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
