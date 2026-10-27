int __arr_6435[10];
int test_func(void) {
    int v0 = 98;
    int v1 = 72;
    int v2 = 9;
    int v3 = 96;
    int v4 = 90;
    int i;
    v4 = v4 * 2;
    for (i = 0; i < 10; i++) { __arr_6435[i] = v1 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
