int test_func(void) {
    int v0 = 94;
    int v1 = 58;
    int v2 = 62;
    int v3 = 85;
    int v4 = 74;
    int v5 = 6;
    int i;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
