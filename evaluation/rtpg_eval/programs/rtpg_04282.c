int test_func(void) {
    int v0 = 53;
    int v1 = 2;
    int v2 = 100;
    int i;
    if (v0 > v1) { v0 = v1; }
    v2 = 67;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
