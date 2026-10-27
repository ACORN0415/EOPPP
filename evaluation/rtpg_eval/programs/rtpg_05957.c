int test_func(void) {
    int v0 = 60;
    int v1 = 58;
    int v2 = 11;
    int v3 = 88;
    int v4 = 56;
    int v5 = 20;
    int i;
    v2 = v2 + v1;
    v3 = 6;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
