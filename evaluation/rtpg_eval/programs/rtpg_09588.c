int __arr_9588[10];
int test_func(void) {
    int v0 = 6;
    int v1 = 63;
    int v2 = 91;
    int i;
    for (i = 0; i < 10; i++) { __arr_9588[i] = v0 + i; }
    for (i = 0; i < 16; i++) {
        v1 = v1 + v2;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
