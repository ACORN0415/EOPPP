int test_func(void) {
    int v0 = 66;
    int v1 = 17;
    int v2 = 17;
    int v3 = 6;
    int i;
    v1 = v1 * 6;
    v0 = 28;
    if (v0 > v1) { v0 = v1; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
