int __arr_8112[10];
int test_func(void) {
    int v0 = 73;
    int v1 = 91;
    int v2 = 3;
    int v3 = 49;
    int i;
    for (i = 0; i < 10; i++) { __arr_8112[i] = v1 + i; }
    for (i = 0; i < 5; i++) {
        v1 = v1 + v3;
    }
    if (v0 > v3) { v0 = v3; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
