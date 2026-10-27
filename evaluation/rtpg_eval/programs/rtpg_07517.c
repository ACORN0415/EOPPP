int test_func(void) {
    int v0 = 63;
    int v1 = 96;
    int v2 = 86;
    int v3 = 79;
    int v4 = 96;
    int i;
    v4 = 45;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
