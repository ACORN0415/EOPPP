int test_func(void) {
    int v0 = 47;
    int v1 = 91;
    int v2 = 72;
    int v3 = 90;
    int i;
    v3 = v3 - v1;
    v1 = v1 + v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
