int test_func(void) {
    int v0 = 71;
    int v1 = 90;
    int v2 = 40;
    int v3 = 84;
    int v4 = 99;
    int v5 = 89;
    int i;
    for (i = 0; i < 11; i++) {
        v5 = v5 + v5;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
