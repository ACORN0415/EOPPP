int __arr_8037[10];
int test_func(void) {
    int v0 = 94;
    int v1 = 75;
    int v2 = 99;
    int i;
    if (v0 > v0) { v0 = v0; }
    for (i = 0; i < 10; i++) { __arr_8037[i] = v1 + i; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
