int test_func(void) {
    int v0 = 54;
    int v1 = 5;
    int v2 = 12;
    int v3 = 89;
    int i;
    v3 = v3 + v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
