int __arr_9823[10];
int test_func(void) {
    int v0 = 81;
    int v1 = 8;
    int v2 = 49;
    int v3 = 86;
    int i;
    for (i = 0; i < 10; i++) { __arr_9823[i] = v1 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
