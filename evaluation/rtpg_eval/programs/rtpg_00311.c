int test_func(void) {
    int v0 = 40;
    int v1 = 31;
    int v2 = 83;
    int v3 = 98;
    int v4 = 36;
    int v5 = 64;
    int v6 = 48;
    int v7 = 20;
    int i;
    v7 = v7 + v5;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
