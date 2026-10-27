int test_func(void) {
    int v0 = 19;
    int v1 = 89;
    int v2 = 66;
    int v3 = 35;
    int v4 = 93;
    int v5 = 67;
    int v6 = 53;
    int i;
    if (v6 > v0) { v6 = v0; }
    v1 = v1 + v2;
    v5 = v5 - v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
