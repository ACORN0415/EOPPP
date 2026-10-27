int __arr_4671[10];
int test_func(void) {
    int v0 = 50;
    int v1 = 89;
    int v2 = 23;
    int i;
    if (v2 > v1) { v2 = v1; }
    for (i = 0; i < 10; i++) { __arr_4671[i] = v0 + i; }
    v0 = v0 - v2;
    v1 = v1 + v1;
    return v0;
}
int main(void) { return test_func(); }
