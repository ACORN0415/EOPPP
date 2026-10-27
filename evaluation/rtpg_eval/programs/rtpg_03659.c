int test_func(void) {
    int v0 = 90;
    int v1 = 97;
    int v2 = 69;
    int v3 = 91;
    int v4 = 26;
    int i;
    v1 = v1 - v4;
    int *__p = &v4;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v4 = v4 | v1;
    return v0;
}
int main(void) { return test_func(); }
