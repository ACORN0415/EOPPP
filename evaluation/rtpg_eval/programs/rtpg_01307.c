int test_func(void) {
    int v0 = 29;
    int v1 = 65;
    int v2 = 56;
    int v3 = 92;
    int v4 = 87;
    int v5 = 30;
    int v6 = 29;
    int i;
    v1 = 30;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
