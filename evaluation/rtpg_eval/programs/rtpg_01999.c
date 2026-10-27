int test_func(void) {
    int v0 = 45;
    int v1 = 23;
    int v2 = 6;
    int v3 = 80;
    int v4 = 65;
    int i;
    if (v0 > v0) { v0 = v0; }
    v2 = v2 * 4;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
