int __arr_2307[10];
int test_func(void) {
    int v0 = 82;
    int v1 = 92;
    int v2 = 19;
    int v3 = 77;
    int v4 = 69;
    int v5 = 45;
    int v6 = 71;
    int v7 = 66;
    int i;
    for (i = 0; i < 10; i++) { __arr_2307[i] = v7 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    return v0;
}
int main(void) { return test_func(); }
