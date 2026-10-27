int __arr_4949[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 55;
    int v2 = 89;
    int v3 = 41;
    int v4 = 50;
    int v5 = 6;
    int i;
    for (i = 0; i < 10; i++) { __arr_4949[i] = v3 + i; }
    if (v3 > v2) { v3 = v2; }
    v0 = v0 + v2;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
