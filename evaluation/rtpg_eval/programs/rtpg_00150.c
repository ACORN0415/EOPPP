int test_func(void) {
    int v0 = 94;
    int v1 = 44;
    int v2 = 35;
    int v3 = 95;
    int v4 = 87;
    int i;
    v4 = v4 - v2;
    v3 = v3 * 10;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
