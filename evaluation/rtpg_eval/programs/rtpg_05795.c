int __arr_5795[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 63;
    int v2 = 84;
    int v3 = 59;
    int v4 = 58;
    int v5 = 54;
    int v6 = 70;
    int v7 = 53;
    int i;
    for (i = 0; i < 10; i++) { __arr_5795[i] = v3 + i; }
    for (i = 0; i < 8; i++) {
        v4 = v4 + v4;
    }
    v7 = v7 + v7;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
