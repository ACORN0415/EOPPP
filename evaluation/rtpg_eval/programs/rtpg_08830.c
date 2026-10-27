int test_func(void) {
    int v0 = 74;
    int v1 = 9;
    int v2 = 41;
    int v3 = 54;
    int i;
    v1 = v1 + v3;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
