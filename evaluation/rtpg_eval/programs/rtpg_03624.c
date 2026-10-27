int __arr_3624[10];
int test_func(void) {
    int v0 = 18;
    int v1 = 59;
    int v2 = 75;
    int v3 = 50;
    int i;
    if (v3 > v2) { v3 = v2; }
    for (i = 0; i < 10; i++) { __arr_3624[i] = v3 + i; }
    return v0;
}
int main(void) { return test_func(); }
