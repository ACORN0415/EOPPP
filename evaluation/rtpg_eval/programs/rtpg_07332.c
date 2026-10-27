int test_func(void) {
    int v0 = 92;
    int v1 = 74;
    int v2 = 24;
    int v3 = 23;
    int i;
    v2 = v2 - v1;
    v3 = v3 + v3;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
