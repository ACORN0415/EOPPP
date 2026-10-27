int test_func(void) {
    int v0 = 0;
    int v1 = 26;
    int v2 = 50;
    int v3 = 12;
    int v4 = 22;
    int v5 = 44;
    int v6 = 10;
    int v7 = 6;
    int i;
    if (v2 > v4) { v2 = v4; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v7;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
