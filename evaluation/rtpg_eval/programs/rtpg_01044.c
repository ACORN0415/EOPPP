int test_func(void) {
    int v0 = 18;
    int v1 = 19;
    int v2 = 84;
    int v3 = 40;
    int v4 = 94;
    int i;
    if (v2 > v0) { v2 = v0; }
    v4 = 70;
    v4 = v4 - v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
