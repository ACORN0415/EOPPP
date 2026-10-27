int test_func(void) {
    int v0 = 91;
    int v1 = 88;
    int v2 = 52;
    int v3 = 18;
    int i;
    v2 = v2 + v3;
    v0 = 18;
    v1 = v1 % (v3 + 1);
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
