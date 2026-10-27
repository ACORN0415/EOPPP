int __arr_2778[10];
int test_func(void) {
    int v0 = 93;
    int v1 = 62;
    int v2 = 84;
    int i;
    for (i = 0; i < 10; i++) { __arr_2778[i] = v0 + i; }
    v2 = v2 + v1;
    return v0;
}
int main(void) { return test_func(); }
