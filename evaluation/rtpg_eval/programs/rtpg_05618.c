int __arr_5618[10];
int test_func(void) {
    int v0 = 84;
    int v1 = 51;
    int v2 = 25;
    int v3 = 76;
    int v4 = 65;
    int i;
    for (i = 0; i < 10; i++) { __arr_5618[i] = v1 + i; }
    if (v0 > v3) { v0 = v3; }
    v4 = v4 + v3;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
