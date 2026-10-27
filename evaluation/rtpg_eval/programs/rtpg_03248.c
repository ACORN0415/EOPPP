int __arr_3248[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 15;
    int v2 = 16;
    int v3 = 60;
    int v4 = 80;
    int i;
    for (i = 0; i < 10; i++) { __arr_3248[i] = v2 + i; }
    v3 = 54;
    v4 = v4 - v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
