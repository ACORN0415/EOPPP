int test_func(void) {
    int v0 = 54;
    int v1 = 35;
    int v2 = 87;
    int v3 = 78;
    int v4 = 41;
    int i;
    if (v4 > v4) { v4 = v4; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
