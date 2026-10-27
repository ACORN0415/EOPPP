int test_func(void) {
    int v0 = 1;
    int v1 = 85;
    int v2 = 86;
    int v3 = 43;
    int v4 = 65;
    int v5 = 11;
    int i;
    v3 = v3 - v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
