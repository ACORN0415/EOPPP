int test_func(void) {
    int v0 = 34;
    int v1 = 23;
    int v2 = 23;
    int v3 = 67;
    int v4 = 37;
    int i;
    v2 = v2 * 5;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
