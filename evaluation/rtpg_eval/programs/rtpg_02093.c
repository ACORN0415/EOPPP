int __arr_2093[10];
int test_func(void) {
    int v0 = 96;
    int v1 = 34;
    int v2 = 83;
    int v3 = 23;
    int v4 = 89;
    int v5 = 33;
    int i;
    for (i = 0; i < 10; i++) { __arr_2093[i] = v4 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
