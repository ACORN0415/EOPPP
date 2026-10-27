int test_func(void) {
    int v0 = 56;
    int v1 = 87;
    int v2 = 84;
    int v3 = 75;
    int v4 = 95;
    int v5 = 11;
    int v6 = 28;
    int v7 = 89;
    int i;
    v1 = 79;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
