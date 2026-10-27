int __arr_3546[10];
int test_func(void) {
    int v0 = 66;
    int v1 = 73;
    int v2 = 88;
    int v3 = 44;
    int v4 = 1;
    int v5 = 51;
    int i;
    for (i = 0; i < 10; i++) { __arr_3546[i] = v2 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
