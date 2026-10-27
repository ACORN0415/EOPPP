int __arr_2683[10];
int test_func(void) {
    int v0 = 81;
    int v1 = 46;
    int v2 = 11;
    int v3 = 93;
    int i;
    v2 = v2 - v1;
    for (i = 0; i < 10; i++) { __arr_2683[i] = v0 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
