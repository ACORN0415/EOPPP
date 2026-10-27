int test_func(void) {
    int v0 = 82;
    int v1 = 36;
    int v2 = 83;
    int i;
    if (v2 > v1) { v2 = v1; }
    int *__p = &v0;
    *__p = *__p + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
