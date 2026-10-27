int test_func(void) {
    int v0 = 43;
    int v1 = 23;
    int v2 = 23;
    int v3 = 100;
    int v4 = 7;
    int v5 = 66;
    int i;
    if (v4 > v2) { v4 = v2; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
