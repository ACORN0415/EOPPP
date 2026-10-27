int test_func(void) {
    int v0 = 50;
    int v1 = 60;
    int v2 = 1;
    int v3 = 27;
    int v4 = 11;
    int v5 = 98;
    int v6 = 69;
    int i;
    v3 = v3 - v1;
    v6 = v6 + v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
