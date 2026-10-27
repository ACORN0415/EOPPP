int test_func(void) {
    int v0 = 14;
    int v1 = 51;
    int v2 = 76;
    int v3 = 53;
    int v4 = 43;
    int i;
    v1 = v1 - v3;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
