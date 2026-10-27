int test_func(void) {
    int v0 = 70;
    int v1 = 88;
    int v2 = 33;
    int v3 = 54;
    int v4 = 84;
    int v5 = 90;
    int v6 = 87;
    int v7 = 47;
    int i;
    v2 = v2 - v4;
    if (v7 > v2) { v7 = v2; }
    for (i = 0; i < 10; i++) {
        v4 = v4 + v6;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
