int test_func(void) {
    int v0 = 62;
    int v1 = 82;
    int v2 = 28;
    int v3 = 47;
    int v4 = 46;
    int v5 = 12;
    int i;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
