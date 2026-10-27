int test_func(void) {
    int v0 = 0;
    int v1 = 57;
    int v2 = 38;
    int v3 = 28;
    int i;
    v2 = 15;
    v1 = v1 - v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
