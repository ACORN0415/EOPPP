int test_func(void) {
    int v0 = 99;
    int v1 = 47;
    int v2 = 78;
    int v3 = 36;
    int i;
    if (v0 > v3) { v0 = v3; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
