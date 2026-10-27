int test_func(void) {
    int v0 = 24;
    int v1 = 94;
    int v2 = 39;
    int i;
    v2 = v2 - v1;
    v1 = 63;
    v0 = v0 * 7;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
