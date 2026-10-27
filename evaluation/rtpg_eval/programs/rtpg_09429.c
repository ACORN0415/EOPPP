int test_func(void) {
    int v0 = 29;
    int v1 = 54;
    int v2 = 55;
    int v3 = 42;
    int v4 = 100;
    int v5 = 34;
    int v6 = 84;
    int v7 = 46;
    int i;
    v5 = v5 - v3;
    v7 = v7 + v1;
    v1 = v1 * 6;
    v1 = v1 % (v4 + 1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v7;
    return v0;
}
int main(void) { return test_func(); }
