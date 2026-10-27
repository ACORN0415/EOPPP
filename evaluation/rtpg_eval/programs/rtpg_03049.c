int test_func(void) {
    int v0 = 90;
    int v1 = 73;
    int v2 = 11;
    int v3 = 78;
    int i;
    if (v1 > v3) { v1 = v3; }
    for (i = 0; i < 7; i++) {
        v2 = v2 + v1;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
