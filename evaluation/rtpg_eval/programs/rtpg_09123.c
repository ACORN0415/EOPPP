int test_func(void) {
    int v0 = 49;
    int v1 = 40;
    int v2 = 2;
    int v3 = 20;
    int v4 = 78;
    int v5 = 61;
    int v6 = 73;
    int v7 = 48;
    int i;
    v4 = v4 * 10;
    v2 = 29;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
