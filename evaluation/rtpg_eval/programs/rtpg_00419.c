int test_func(void) {
    int v0 = 65;
    int v1 = 72;
    int v2 = 65;
    int v3 = 98;
    int i;
    v2 = v2 - v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
