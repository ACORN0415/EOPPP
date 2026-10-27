int test_func(void) {
    int v0 = 81;
    int v1 = 74;
    int v2 = 17;
    int i;
    for (i = 0; i < 14; i++) {
        v1 = v1 + v0;
    }
    if (v1 > v2) { v1 = v2; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
