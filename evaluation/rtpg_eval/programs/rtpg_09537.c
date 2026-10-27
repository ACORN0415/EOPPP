int test_func(void) {
    int v0 = 93;
    int v1 = 69;
    int v2 = 32;
    int v3 = 72;
    int i;
    v3 = v3 - v2;
    v2 = v2 + v3;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
