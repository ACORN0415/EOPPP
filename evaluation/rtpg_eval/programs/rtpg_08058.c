int test_func(void) {
    int v0 = 40;
    int v1 = 25;
    int v2 = 5;
    int v3 = 76;
    int v4 = 14;
    int v5 = 47;
    int v6 = 43;
    int v7 = 11;
    int i;
    for (i = 0; i < 13; i++) {
        v4 = v4 + v6;
    }
    v6 = v6 * 6;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v7 = (int)__c;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
