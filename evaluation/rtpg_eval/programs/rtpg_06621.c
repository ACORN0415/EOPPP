int __arr_6621[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 43;
    int v2 = 88;
    int v3 = 4;
    int v4 = 86;
    int v5 = 21;
    int v6 = 64;
    int i;
    v6 = v6 + v0;
    for (i = 0; i < 10; i++) { __arr_6621[i] = v3 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
