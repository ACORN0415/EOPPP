int test_func(void) {
    int v0 = 14;
    int v1 = 32;
    int v2 = 74;
    int v3 = 56;
    int v4 = 86;
    int v5 = 6;
    int i;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
