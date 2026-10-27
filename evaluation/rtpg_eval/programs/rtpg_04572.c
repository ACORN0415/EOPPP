int test_func(void) {
    int v0 = 91;
    int v1 = 40;
    int v2 = 92;
    int i;
    v2 = v2 + v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
