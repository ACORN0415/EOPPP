int test_func(void) {
    int v0 = 44;
    int v1 = 28;
    int v2 = 83;
    int i;
    if (v2 > v1) { v2 = v1; }
    for (i = 0; i < 17; i++) {
        v0 = v0 + v0;
    }
    v2 = v2 - v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
