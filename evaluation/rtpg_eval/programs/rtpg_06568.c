int test_func(void) {
    int v0 = 56;
    int v1 = 95;
    int v2 = 10;
    int v3 = 89;
    int v4 = 51;
    int v5 = 88;
    int v6 = 13;
    int v7 = 19;
    int i;
    union __U { int x; float y; };
    union __U __u; __u.x = v7;
    return v0;
}
int main(void) { return test_func(); }
