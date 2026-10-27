int test_func(void) {
    int v0 = 96;
    int v1 = 16;
    int v2 = 87;
    int i;
    v1 = v1 - v0;
    if (v0 > v0) { v0 = v0; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
