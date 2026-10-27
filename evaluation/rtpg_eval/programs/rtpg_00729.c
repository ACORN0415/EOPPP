int __arr_729[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 44;
    int v2 = 89;
    int i;
    v1 = v1 + v1;
    v0 = v0 - v1;
    for (i = 0; i < 10; i++) { __arr_729[i] = v0 + i; }
    return v0;
}
int main(void) { return test_func(); }
