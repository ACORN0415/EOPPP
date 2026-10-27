int test_func(void) {
    int v0 = 41;
    int v1 = 42;
    int v2 = 49;
    int i;
    v1 = v1 - v2;
    v2 = v2 + v1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
