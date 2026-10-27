int test_func(void) {
    int v0 = 35;
    int v1 = 4;
    int v2 = 37;
    int v3 = 60;
    int v4 = 31;
    int i;
    v2 = v2 + v1;
    if (v3 > v3) { v3 = v3; }
    for (i = 0; i < 20; i++) {
        v3 = v3 + v4;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
