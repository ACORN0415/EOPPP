int __arr_9463[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 13;
    int v2 = 3;
    int v3 = 10;
    int i;
    for (i = 0; i < 6; i++) {
        v1 = v1 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_9463[i] = v3 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v3 = v3 % (v1 + 1);
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
