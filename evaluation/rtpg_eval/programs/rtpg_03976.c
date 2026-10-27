int test_func(void) {
    int v0 = 50;
    int v1 = 7;
    int v2 = 79;
    int v3 = 33;
    int i;
    v1 = v1 - v3;
    for (i = 0; i < 9; i++) {
        v1 = v1 + v3;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
