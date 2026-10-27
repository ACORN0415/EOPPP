int test_func(void) {
    int v0 = 20;
    int v1 = 27;
    int v2 = 32;
    int v3 = 16;
    int i;
    v1 = v1 + v3;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
