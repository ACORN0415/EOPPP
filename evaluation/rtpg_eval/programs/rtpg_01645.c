int test_func(void) {
    int v0 = 32;
    int v1 = 62;
    int v2 = 73;
    int i;
    v1 = v1 - v2;
    v0 = v0 + v0;
    if (v0 > v2) { v0 = v2; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
