int __arr_7543[10];
int test_func(void) {
    int v0 = 27;
    int v1 = 77;
    int v2 = 29;
    int v3 = 89;
    int v4 = 97;
    int i;
    if (v1 > v3) { v1 = v3; }
    for (i = 0; i < 10; i++) { __arr_7543[i] = v0 + i; }
    v1 = v1 + v2;
    return v0;
}
int main(void) { return test_func(); }
