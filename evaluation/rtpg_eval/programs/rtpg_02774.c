int test_func(void) {
    int v0 = 66;
    int v1 = 14;
    int v2 = 82;
    int v3 = 96;
    int v4 = 29;
    int i;
    for (i = 0; i < 16; i++) {
        v4 = v4 + v0;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
