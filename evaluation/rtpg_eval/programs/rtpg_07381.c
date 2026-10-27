int test_func(void) {
    int v0 = 20;
    int v1 = 52;
    int v2 = 56;
    int v3 = 50;
    int i;
    if (v1 > v0) { v1 = v0; }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
