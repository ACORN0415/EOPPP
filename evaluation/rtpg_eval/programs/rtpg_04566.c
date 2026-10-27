int test_func(void) {
    int v0 = 86;
    int v1 = 85;
    int v2 = 37;
    int v3 = 60;
    int v4 = 26;
    int v5 = 31;
    int v6 = 12;
    int v7 = 98;
    int i;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    v0 = v0 / (v6 + 1);
    return v0;
}
int main(void) { return test_func(); }
