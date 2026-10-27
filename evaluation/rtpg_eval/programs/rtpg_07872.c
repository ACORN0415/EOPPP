int test_func(void) {
    int v0 = 48;
    int v1 = 14;
    int v2 = 39;
    int i;
    if (v1 > v0) { v1 = v0; }
    v1 = 2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
