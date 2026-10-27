int __arr_1455[10];
int test_func(void) {
    int v0 = 89;
    int v1 = 29;
    int v2 = 16;
    int v3 = 62;
    int v4 = 63;
    int v5 = 41;
    int v6 = 56;
    int i;
    for (i = 0; i < 10; i++) {
        v4 = v4 + v5;
    }
    for (i = 0; i < 10; i++) { __arr_1455[i] = v2 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    v2 = v2 | v6;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
