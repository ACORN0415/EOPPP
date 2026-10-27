int test_func(void) {
    int v0 = 86;
    int v1 = 68;
    int v2 = 47;
    int i;
    v0 = 24;
    v0 = v0 + v0;
    int *__p = &v2;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
