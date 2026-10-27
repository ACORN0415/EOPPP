int __arr_4262[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 39;
    int v2 = 70;
    int v3 = 96;
    int v4 = 49;
    int v5 = 58;
    int i;
    for (i = 0; i < 10; i++) { __arr_4262[i] = v2 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
