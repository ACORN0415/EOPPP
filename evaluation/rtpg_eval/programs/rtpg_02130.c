int test_func(void) {
    int v0 = 95;
    int v1 = 92;
    int v2 = 22;
    int v3 = 46;
    int i;
    v3 = 39;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    int *__p = &v3;
    *__p = *__p + 1;
    v0 = v0 % (v3 + 1);
    return v0;
}
int main(void) { return test_func(); }
