int test_func(void) {
    int v0 = 37;
    int v1 = 95;
    int v2 = 45;
    int v3 = 48;
    int v4 = 0;
    int v5 = 79;
    int v6 = 36;
    int v7 = 10;
    int i;
    for (i = 0; i < 10; i++) {
        v4 = v4 + v7;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
