int test_func(void) {
    int v0 = 30;
    int v1 = 25;
    int v2 = 95;
    int i;
    v1 = 52;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
