int test_func(void) {
    int v0 = 56;
    int v1 = 82;
    int v2 = 44;
    int v3 = 66;
    int v4 = 10;
    int i;
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
