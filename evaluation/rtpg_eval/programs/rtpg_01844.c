int test_func(void) {
    int v0 = 64;
    int v1 = 74;
    int v2 = 55;
    int v3 = 23;
    int v4 = 65;
    int v5 = 49;
    int v6 = 79;
    int v7 = 39;
    int i;
    for (i = 0; i < 12; i++) {
        v7 = v7 + v3;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    v4 = v4 % (v6 + 1);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
