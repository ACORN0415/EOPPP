int __arr_8020[10];
int test_func(void) {
    int v0 = 73;
    int v1 = 39;
    int v2 = 21;
    int v3 = 28;
    int v4 = 26;
    int v5 = 15;
    int v6 = 48;
    int v7 = 5;
    int i;
    v6 = v6 - v4;
    for (i = 0; i < 10; i++) { __arr_8020[i] = v7 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
