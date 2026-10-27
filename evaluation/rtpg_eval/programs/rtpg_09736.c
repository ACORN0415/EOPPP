int test_func(void) {
    int v0 = 69;
    int v1 = 42;
    int v2 = 65;
    int v3 = 16;
    int i;
    v1 = v1 - v3;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
