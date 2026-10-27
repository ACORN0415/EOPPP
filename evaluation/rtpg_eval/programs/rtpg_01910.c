int test_func(void) {
    int v0 = 74;
    int v1 = 67;
    int v2 = 83;
    int v3 = 21;
    int v4 = 54;
    int v5 = 92;
    int i;
    v5 = v5 - v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
