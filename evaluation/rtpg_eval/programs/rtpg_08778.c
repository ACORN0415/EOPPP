int test_func(void) {
    int v0 = 74;
    int v1 = 84;
    int v2 = 42;
    int i;
    v2 = v2 * 8;
    v0 = v0 + v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
