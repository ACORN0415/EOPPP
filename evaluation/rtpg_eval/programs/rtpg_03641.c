int __arr_3641[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 75;
    int v2 = 21;
    int i;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_3641[i] = v1 + i; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
