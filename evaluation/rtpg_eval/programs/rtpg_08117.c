int test_func(void) {
    int v0 = 83;
    int v1 = 47;
    int v2 = 62;
    int v3 = 83;
    int v4 = 82;
    int v5 = 85;
    int v6 = 0;
    int v7 = 59;
    int i;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    v6 = v6 / (v5 + 1);
    return v0;
}
int main(void) { return test_func(); }
