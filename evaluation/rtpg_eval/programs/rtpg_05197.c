int test_func(void) {
    int v0 = 62;
    int v1 = 77;
    int v2 = 28;
    int v3 = 33;
    int i;
    if (v0 > v2) { v0 = v2; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
