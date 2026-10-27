int test_func(void) {
    int v0 = 18;
    int v1 = 35;
    int v2 = 92;
    int v3 = 53;
    int v4 = 17;
    int v5 = 0;
    int v6 = 25;
    int i;
    if (v6 > v2) { v6 = v2; }
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
