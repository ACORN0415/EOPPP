int test_func(void) {
    int v0 = 56;
    int v1 = 16;
    int v2 = 33;
    int v3 = 44;
    int v4 = 95;
    int v5 = 36;
    int v6 = 78;
    int v7 = 66;
    int i;
    for (i = 0; i < 14; i++) {
        v4 = v4 + v0;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
