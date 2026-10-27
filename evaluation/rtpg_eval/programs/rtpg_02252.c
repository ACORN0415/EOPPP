int test_func(void) {
    int v0 = 36;
    int v1 = 68;
    int v2 = 72;
    int v3 = 35;
    int v4 = 46;
    int v5 = 50;
    int v6 = 53;
    int v7 = 52;
    int i;
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
