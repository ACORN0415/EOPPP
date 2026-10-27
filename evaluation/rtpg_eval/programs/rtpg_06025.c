int test_func(void) {
    int v0 = 88;
    int v1 = 41;
    int v2 = 66;
    int i;
    v2 = v2 - v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
