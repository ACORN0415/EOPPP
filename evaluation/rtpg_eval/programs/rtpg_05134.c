int __arr_5134[10];
int test_func(void) {
    int v0 = 100;
    int v1 = 96;
    int v2 = 79;
    int v3 = 45;
    int v4 = 73;
    int v5 = 78;
    int v6 = 30;
    int i;
    for (i = 0; i < 10; i++) { __arr_5134[i] = v5 + i; }
    v5 = v5 + v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
