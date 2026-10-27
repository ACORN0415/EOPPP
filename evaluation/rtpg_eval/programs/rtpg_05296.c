int test_func(void) {
    int v0 = 64;
    int v1 = 52;
    int v2 = 68;
    int v3 = 71;
    int v4 = 26;
    int v5 = 56;
    int v6 = 34;
    int i;
    v6 = v6 - v2;
    v6 = v6 + v6;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
