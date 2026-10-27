int test_func(void) {
    int v0 = 38;
    int v1 = 83;
    int v2 = 29;
    int v3 = 30;
    int i;
    v3 = v3 * 6;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
