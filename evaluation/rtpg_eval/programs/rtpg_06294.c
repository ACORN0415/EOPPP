int test_func(void) {
    int v0 = 32;
    int v1 = 29;
    int v2 = 24;
    int v3 = 76;
    int v4 = 3;
    int v5 = 13;
    int v6 = 92;
    int i;
    v6 = v6 + v6;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    v1 = v1 & v2;
    return v0;
}
int main(void) { return test_func(); }
