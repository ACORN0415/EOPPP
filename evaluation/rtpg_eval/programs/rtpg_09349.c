int __arr_9349[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 87;
    int v2 = 62;
    int v3 = 13;
    int v4 = 33;
    int v5 = 38;
    int i;
    v2 = v2 * 10;
    if (v4 > v2) { v4 = v2; }
    for (i = 0; i < 10; i++) { __arr_9349[i] = v2 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v3 = v3 | v5;
    return v0;
}
int main(void) { return test_func(); }
