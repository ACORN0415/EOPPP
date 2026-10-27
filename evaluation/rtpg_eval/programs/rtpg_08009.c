int test_func(void) {
    int v0 = 42;
    int v1 = 15;
    int v2 = 4;
    int v3 = 84;
    int v4 = 98;
    int v5 = 1;
    int v6 = 42;
    int v7 = 84;
    int i;
    if (v0 > v4) { v0 = v4; }
    v5 = v5 * 4;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
