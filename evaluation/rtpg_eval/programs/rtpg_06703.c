int test_func(void) {
    int v0 = 81;
    int v1 = 35;
    int v2 = 31;
    int i;
    v1 = v1 + v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
