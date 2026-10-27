int test_func(void) {
    int v0 = 12;
    int v1 = 18;
    int v2 = 28;
    int v3 = 84;
    int v4 = 27;
    int v5 = 17;
    int v6 = 86;
    int i;
    for (i = 0; i < 17; i++) {
        v4 = v4 + v2;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
