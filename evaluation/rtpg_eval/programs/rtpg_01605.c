int __arr_1605[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 2;
    int v2 = 65;
    int v3 = 18;
    int v4 = 26;
    int v5 = 13;
    int v6 = 2;
    int i;
    for (i = 0; i < 10; i++) { __arr_1605[i] = v0 + i; }
    v0 = v0 - v1;
    if (v0 > v3) { v0 = v3; }
    v5 = v5 + v6;
    return v0;
}
int main(void) { return test_func(); }
