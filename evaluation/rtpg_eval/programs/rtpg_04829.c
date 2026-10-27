int __arr_4829[10];
int test_func(void) {
    int v0 = 69;
    int v1 = 85;
    int v2 = 100;
    int v3 = 84;
    int v4 = 15;
    int v5 = 72;
    int v6 = 33;
    int v7 = 85;
    int i;
    v2 = v2 + v2;
    for (i = 0; i < 10; i++) { __arr_4829[i] = v2 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
