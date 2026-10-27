int __arr_9034[10];
int test_func(void) {
    int v0 = 79;
    int v1 = 59;
    int v2 = 49;
    int v3 = 65;
    int i;
    v3 = v3 + v3;
    for (i = 0; i < 10; i++) { __arr_9034[i] = v3 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
