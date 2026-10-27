int test_func(void) {
    int v0 = 100;
    int v1 = 67;
    int v2 = 67;
    int v3 = 3;
    int v4 = 29;
    int v5 = 39;
    int v6 = 31;
    int i;
    v3 = 19;
    if (v5 > v2) { v5 = v2; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
