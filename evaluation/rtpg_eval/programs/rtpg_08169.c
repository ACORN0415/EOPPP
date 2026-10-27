int __arr_8169[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 45;
    int v2 = 85;
    int v3 = 96;
    int v4 = 52;
    int v5 = 19;
    int i;
    v1 = v1 - v4;
    for (i = 0; i < 10; i++) { __arr_8169[i] = v4 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
