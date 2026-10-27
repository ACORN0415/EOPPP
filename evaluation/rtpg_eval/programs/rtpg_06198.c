int test_func(void) {
    int v0 = 86;
    int v1 = 87;
    int v2 = 3;
    int v3 = 17;
    int v4 = 67;
    int i;
    if (v4 > v1) { v4 = v1; }
    v3 = v3 + v0;
    int *__p = &v3;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
