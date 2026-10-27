int __arr_8537[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 68;
    int v2 = 25;
    int i;
    for (i = 0; i < 10; i++) { __arr_8537[i] = v1 + i; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
