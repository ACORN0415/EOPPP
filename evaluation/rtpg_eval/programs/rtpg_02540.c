int test_func(void) {
    int v0 = 26;
    int v1 = 77;
    int v2 = 56;
    int v3 = 57;
    int v4 = 33;
    int i;
    if (v4 > v3) { v4 = v3; }
    v0 = v0 + v1;
    v0 = v0 - v1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
