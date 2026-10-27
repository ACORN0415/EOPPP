int __arr_9565[10];
int test_func(void) {
    int v0 = 35;
    int v1 = 33;
    int v2 = 21;
    int i;
    for (i = 0; i < 10; i++) { __arr_9565[i] = v2 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
