int test_func(void) {
    int v0 = 59;
    int v1 = 62;
    int v2 = 74;
    int v3 = 80;
    int v4 = 61;
    int i;
    v0 = v0 + v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    int *__p = &v0;
    *__p = *__p + 1;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
