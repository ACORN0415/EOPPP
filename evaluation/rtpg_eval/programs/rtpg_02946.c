int __arr_2946[10];
int test_func(void) {
    int v0 = 84;
    int v1 = 91;
    int v2 = 97;
    int v3 = 85;
    int v4 = 89;
    int i;
    v4 = v4 * 5;
    v3 = v3 + v4;
    for (i = 0; i < 10; i++) { __arr_2946[i] = v3 + i; }
    return v0;
}
int main(void) { return test_func(); }
