int __arr_3882[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 73;
    int v2 = 65;
    int i;
    for (i = 0; i < 10; i++) { __arr_3882[i] = v0 + i; }
    v2 = v2 * 8;
    return v0;
}
int main(void) { return test_func(); }
