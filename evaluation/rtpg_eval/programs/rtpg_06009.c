int test_func(void) {
    int v0 = 75;
    int v1 = 16;
    int v2 = 77;
    int i;
    v0 = 97;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v2 = v2 % (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
