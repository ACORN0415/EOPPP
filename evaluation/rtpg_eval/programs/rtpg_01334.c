int test_func(void) {
    int v0 = 98;
    int v1 = 17;
    int v2 = 91;
    int i;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v1;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
