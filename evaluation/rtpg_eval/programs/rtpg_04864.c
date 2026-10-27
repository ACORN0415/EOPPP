int test_func(void) {
    int v0 = 6;
    int v1 = 63;
    int v2 = 7;
    int v3 = 91;
    int v4 = 40;
    int i;
    v3 = 45;
    v2 = v2 + v3;
    v2 = v2 / (v0 + 1);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
