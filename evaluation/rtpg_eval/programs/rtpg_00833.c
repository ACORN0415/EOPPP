int test_func(void) {
    int v0 = 35;
    int v1 = 66;
    int v2 = 66;
    int v3 = 4;
    int i;
    v0 = v0 - v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
